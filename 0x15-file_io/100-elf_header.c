#include "main.h"

/**
  * isELF - checks if the file is an ELF file
  * @ehdr: elf header to be checked
  * Return: 1 if header is for ELF file and 0 if otherwise
  */
int isELF(Elf32_Ehdr ehdr)
{
	if (ehdr.e_ident[EI_MAG0] != ELFMAG0 ||
		ehdr.e_ident[EI_MAG1] != ELFMAG1 ||
		ehdr.e_ident[EI_MAG2] != ELFMAG2 ||
		ehdr.e_ident[EI_MAG3] != ELFMAG3)
		return (0);

	return (1);
}

/**
  * printELFHeaderInfo - prints the ELF header information
  * @ehdr: elf header to be checked
  */
void printELFHeaderInfo(Elf32_Ehdr ehdr)
{
	int i;

	printf("ELF Header:\n");
	printf("  Magic:  ");
	for (i = 0; i < EI_NIDENT; i++)
		printf("%02x ", ehdr.e_ident[i]);
	printf("\n");

	printf("  Class:                             ");
	switch (ehdr.e_ident[EI_CLASS])
	{
	case ELFCLASSNONE:
		printf("none\n");
		break;
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	default:
		printf("<unknown: %d>\n", ehdr.e_ident[EI_CLASS]);
	}

	printf("  Data:                              ");
	switch (ehdr.e_ident[EI_DATA])
	{
		case ELFDATANONE:
			printf("none\n");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		default:
			printf("<unknown: %d>\n", ehdr.e_ident[EI_DATA]);
	}

	printf("  Version:                           %d\n", ehdr.e_ident[EI_VERSION]);

	printf("  OS/ABI:                            ");
	switch (ehdr.e_ident[EI_OSABI])
	{
		case ELFOSABI_SYSV:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX\n");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD\n");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris\n");
			break;
		case ELFOSABI_AIX:
			printf("UNIX - AIX\n");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD\n");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - TRU64\n");
			break;
		case ELFOSABI_MODESTO:
			printf("Novell - Modesto\n");
			break;
		case ELFOSABI_OPENBSD:
			printf("UNIX - OpenBSD\n");
			break;
		case ELFOSABI_ARM_AEABI:
			printf("ARM EABI\n");
			break;
		case ELFOSABI_ARM:
			printf("ARM\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone App\n");
			break;
		default:
			printf("<unknown: %d>\n", ehdr.e_ident[EI_OSABI]);
	}

	printf("  ABI Version:                       %d\n", ehdr.e_ident[EI_ABIVERSION]);

	printf("  Type:                              ");
	switch (ehdr.e_type)
	{
		case ET_NONE:
			printf("NONE (No file type)\n");
			break;
		case ET_REL:
			printf("REL (Relocatable file)\n");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)\n");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)\n");
			break;
		case ET_CORE:
			printf("CORE (Core file)\n");
			break;
		default:
			printf("<unknown: %d>\n", ehdr.e_type);
	}

	printf("  Entry point address:               %08x\n", ehdr.e_entry);
}

/**
  * main - opens, reads and prints ELF header of the specified file.
  * @argc: number of command-line arguments
  * @argv: command line arguments
  * Return: Return zero
  */
int main(int argc, char *argv[])
{
	int fd;
	Elf32_Ehdr ehdr;
	ssize_t nread;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s <elf-file>\n", argv[0]);
		exit(98);
	}

	/* Open the ELF file */
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		fprintf(stderr, "Error: Cannot open file '%s': %s\n", argv[1], strerror(errno));
		exit(98);
	}

	/* Read the ELF header */
	nread = read(fd, &ehdr, sizeof(ehdr));
	if (nread != sizeof(ehdr))
	{
		fprintf(stderr, "Error: Cannot read ELF header: %s\n", strerror(errno));
		exit(98);
	}

	/* Check if the file is an ELF file */
	if (!isELF(ehdr))
	{
		fprintf(stderr, "Error: Not an ELF file\n");
		exit(98);
	}

	/* Print the ELF header information */
	printELFHeaderInfo(ehdr);

	/* Close the file */
	close(fd);

	return (0);
}

