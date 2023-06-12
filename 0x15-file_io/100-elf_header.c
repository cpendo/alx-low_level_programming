#include "main.h"

/**
 * display_elf_header - display information about a elf file
 * @header: pointer to an Elf64_Ehdr structure
 */

void display_elf_header(const Elf64_Ehdr *header)
{
	int i;

	printf("ELF Header:\n");
	printf("  Magic:  ");
	for (i = 0; i < EI_NIDENT; i++)
		printf("%02x ", header->e_ident[i]);
	printf("\n");
	printf("  Class:\t\t\t     ELF%d\n", header->e_ident[EI_CLASS] ==
			ELFCLASS64 ? 64 : 32);
	printf("  Data:\t\t\t\t     %s\n", header->e_ident[EI_DATA] == ELFDATA2LSB ?
			"2's complement, little endian" : "2's complement, big endian");
	printf("  Version:\t\t\t     %d (current)\n", header->e_ident[EI_VERSION]);
	printf("  OS/ABI:\t\t\t     ");
	switch (header->e_ident[EI_OSABI])
	{
		case ELFOSABI_SYSV:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris\n");
			break;
		default:
			printf("<Unknown: 53>\n");
			break; }
	printf("  ABI Version:\t\t\t     %d\n", header->e_ident[EI_ABIVERSION]);
	printf("  Type:\t\t\t\t     ");
	switch (header->e_type)
	{
		case ET_EXEC:
			printf("EXEC (Executable file)\n");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)\n");
			break;
		default:
			break; }
	printf("  Entry point address:\t\t     0x%lx\n", header->e_entry);
}

/**
 * main - reads and examines the ELF header of a given ELF file
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int fd;
	Elf64_Ehdr header;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		exit(98);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		fprintf(stderr, "Error: Failed to open file '%s'\n", argv[1]);
		exit(98);
	}
	if (read(fd, &header, sizeof(header)) != sizeof(header))
	{
		fprintf(stderr, "Error: Failed to read ELF header\n");
		close(fd);
		exit(98);
	}
	if (header.e_ident[EI_MAG0] != ELFMAG0 ||
			header.e_ident[EI_MAG1] != ELFMAG1 || header.e_ident[EI_MAG2] != ELFMAG2 ||
			header.e_ident[EI_MAG3] != ELFMAG3)
	{
		fprintf(stderr, "Error: File '%s' is not an ELF file\n", argv[1]);
		close(fd);
		exit(98);
	}

	display_elf_header(&header);

	close(fd);
	return (0);
}
