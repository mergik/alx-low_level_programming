#include "main.h"

/**
 * create_file - creates a file with specified content
 * @filename: name of the file to create
 * @text_content: string to write to file
 * Return: 1 on success, -1 on error
 */
int create_file(const char *filename, char *text_content)
{
	int fd, result = 1;
	ssize_t bytes_written;
	mode_t mode = S_IRUSR | S_IWUSR;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, mode);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		bytes_written = write(fd, text_content, strlen(text_content));
	if (bytes_written == -1)
		result = -1;
	}

	if (close(fd) == -1)
		result = -1;

	return (result);
}
