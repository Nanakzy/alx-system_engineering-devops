#include "main.h"
#include <elf.h>

/**
 * print_elf_header - displays the information contained in the ELF header
 *
 */
void print_elf_header(Elf32_Ehdr *header)
{
	printf("Magic:   %02x %02x %02x %02x\n",
			header->e_ident[EI_MAG0],
			header->e_ident[EI_MAG1],
			header->e_ident[EI_MAG2],
			header->e_ident[EI_MAG3]);

	printf("Class:   %d-bit\n", header->e_ident[EI_CLASS] == ELFCLASS32 ? 32 : 64);
	printf("Data:    %s\n", header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little-endian" : "2's complement, big-endian");
	printf("Version: %d (current)\n", header->e_ident[EI_VERSION]);
	printf("OS/ABI:  %s\n", header->e_ident[EI_OSABI] == ELFOSABI_SYSV ? "UNIX - System V" : "Unknown");
printf("ABI Version: %d\n", header->e_ident[EI_ABIVERSION]);
printf("Type:    %s\n", header->e_type == ET_EXEC ? "EXEC (Executable file)" : "Unknown");
printf("Entry point address: %08x\n", header->e_entry);
}

int main(int argc, char *argv[])
{
	int fd;

	Elf32_Ehdr header;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		return (98);
	}

	fd = open(argv[1], O_RDONLY);

	if (fd == -1)
	{
		perror("Error opening file");
		return (98);
	}

	if (read(fd, &header, sizeof(header)) != sizeof(header))
	{
		perror("Error reading ELF header");
		close(fd);
		return (98);
	}

	if (memcmp(header.e_ident, ELFMAG, SELFMAG) != 0)
	{
		fprintf(stderr, "Error: Not an ELF file\n");
		close(fd);
		return (98);
	}

	print_elf_header(&header);

	close(fd);
	return (0);
}


