#include "main.h"

/**
  *print_ident - prints info from identification struct of elf header
  *@header: pointer to elf header struct
  *Return: void
  */

void print_ident(const Elf64_Ehdr *header)
{
	int i;
	char *str = NULL;

	printf("ELF Header:\n");
	printf("	Magic:	");
	for (i = 0; i < EI_NIDENT; i++)
		printf("%02x ", header->e_ident[i]);
	printf("\n");
	i = (header->e_ident[EI_CLASS] == ELFCLASS32 ? 32 : 64);
	printf("	Class:			ELF%d\n", i);
	if (header->e_ident[EI_DATA] == ELFDATA2LSB)
		str = "2's complement, little endian";
	else
		str = "Unknown";
	printf("	Data:			%s\n", str);
	printf("	Version:		%d (current)", header->e_ident[EI_VERSION]);
	printf("\n");
	printf("	OS/ABI:			");
	switch (header->e_ident[EI_OSABI])
	{
		case ELFOSABI_SYSV:
			printf("Unix - System V\n");
			break;
		case ELFOSABI_LINUX:
			printf("Unix - Linux\n");
			break;
		default:
			printf("Unknown\n");
	}
	printf("	ABI Version:		%d\n", header->e_ident[EI_ABIVERSION]);

}

/**
  *print_elf - prints an elf header
  *@header: pointer to struct containing elf information
  *Return: void
  */

void print_elf(const Elf64_Ehdr *header)
{
	print_ident(header);
	printf("	Type:			");
	switch (header->e_type)
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
			printf("Unknown\n");
	}
	printf("	Entry point address:	%#lx\n", header->e_entry);
}

/**
  *is_elf - checks if file is an elf file
  *@header: pointer to elf header
  *Return: 1 on success, -1 on failure
  */

int is_elf(const Elf64_Ehdr *header)
{
	if (header->e_ident[EI_MAG0] == ELFMAG0)
		return (1);
	else if (header->e_ident[EI_MAG1] == ELFMAG1)
		return (1);
	else if (header->e_ident[EI_MAG2] == ELFMAG2)
		return (1);
	else if (header->e_ident[EI_MAG3] == ELFMAG3)
		return (1);
	else
		return (-1);
}

/**
  *main - entry point of the program
  *@argc: argument count
  *@argv: argument vector
  *Return: 0 on success, 98 on failure
  */

int main(int argc, char **argv)
{
	int file, bytes;
	Elf64_Ehdr header;

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: %s <elf_file>\n", argv[0]);
		exit(98);
	}
	file = open(argv[1], O_RDONLY);
	if (file == -1)
	{
		dprintf(STDERR_FILENO, "Error opening file\n");
		exit(98);
	}
	bytes = read(file, &header, sizeof(Elf64_Ehdr));
	if (bytes != sizeof(header))
	{
		close(file);
		dprintf(STDERR_FILENO, "Error reading file\n");
		exit(98);
	}
	bytes = is_elf(&header);
	if (bytes < 0)
	{
		dprintf(STDERR_FILENO, "Not an ELF file\n");
		close(file);
		exit(98);
	}
	print_elf(&header);
	file = close(file);
	if (file == 1)
		dprintf(STDERR_FILENO, "Error in closing\n");
	return (0);
}
