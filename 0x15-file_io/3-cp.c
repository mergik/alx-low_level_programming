#include "main.h"

/**
 * error_exit - prints error msg to std error and exits with given status code.
 * @status_code: the status code to exit with.
 * @format: the format string for the error message.
 */
void error_exit(int status_code, const char *format, ...)
{
	va_list args;

	va_start(args, format);
	dprintf(STDERR_FILENO, format, args);
	va_end(args);

	exit(status_code);
}

/**
 * main - copies the content of a file to another file
 * @argc: the number of arguments
 * @argv: the array of arguments
 * Return: 0 on success, or the corresponding error code on failure
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, read_result, write_result;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
		error_exit(97, "Usage: cp file_from file_to\n");

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		error_exit(98, "Error: Can't read from file %s\n", argv[1]);

	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (file_to == -1)
		error_exit(99, "Error: Can't write to %s\n", argv[2]);

	while ((read_result = read(file_from, buffer, BUFFER_SIZE)) > 0)
	{
		write_result = write(file_to, buffer, read_result);
		if (write_result != read_result)
			error_exit(99, "Error: Can't write to %s\n", argv[2]);
	}

	if (read_result == -1)
		error_exit(98, "Error: Can't read from file %s\n", argv[1]);

	if (close(file_from) == -1)
		error_exit(100, "Error: Can't close fd %d\n", file_from);

	if (close(file_to) == -1)
		error_exit(100, "Error: Can't close fd %d\n", file_to);

	return (0);
}
