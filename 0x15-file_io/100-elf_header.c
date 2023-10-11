#include "main.h"

void print_elf_header(const Elf64_Ehdr *elf_header);

/**
 * main - begin of code
 * @argc: number of arguments
 * @argv: argument vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	const char *elf_filename = argv[1];
	ssize_t bytes_read;
	Elf64_Ehdr elf_header;
	int fd;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		return (98);
	}

	fd = open(elf_filename, O_RDONLY);

	if (fd == -1)
	{
		fprintf(stderr, "Error: Unable to open file: %s\n", strerror(errno));
		return (98);
	}

	bytes_read = read(fd, &elf_header, sizeof(elf_header));

	if (bytes_read != sizeof(elf_header) || memcmp(elf_header.e_ident, ELFMAG, SELFMAG) != 0)
	{
		fprintf(stderr, "Error: Not a valid ELF file\n");
		close(fd);
		return (98);
	}
	print_elf_header(&elf_header);

	close(fd);
	return (0);
}
/**
 * print_elf_header - displays the information contained in the ELF header at the start of an ELF file
 * @elf_header: header
 * Return: 0
 */
void print_elf_header(const Elf64_Ehdr *elf_header)
{
	int i;

	printf("  Magic:   ");

	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", elf_header->e_ident[i]);
	}
	printf("\n");

	printf("  Class:                             %s\n", (elf_header->e_ident[EI_CLASS] == ELFCLASS64) ? "ELF64" : "ELF32");
	printf("  Data:                              %s\n", (elf_header->e_ident[EI_DATA] == ELFDATA2LSB) ? "2's complement, little endian" : "2's complement, big endian");
	printf("  Version:                           %d (current)\n", elf_header->e_ident[EI_VERSION]);
	printf("  OS/ABI:                            %d\n", elf_header->e_ident[EI_OSABI]);
	printf("  ABI Version:                       %d\n", elf_header->e_ident[EI_ABIVERSION]);

	printf("  Type:                              %d (EXEC (Executable file))\n", elf_header->e_type);
	printf("  Entry point address:               0x%lx\n", elf_header->e_entry);
}
