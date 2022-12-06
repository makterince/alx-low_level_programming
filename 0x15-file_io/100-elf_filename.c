#include "main.h"
/**
 *check_elf - to see if file is an elf file
 *@e_ident: pointer to array containing elf file
 *Description: if file is not an elf file - exit 98
 *
 */
void check_elf(unsigned char *e_ident)
{
	int i;

	for (i = 0; i < 4; i++)
	{
		if (e_ident[i] != 127 && e_ident[i] != 'E' &&
			e_ident[i] != 'L' && e_ident[i] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}
/**
 *print_magic - prints magic number of ELF header
 *@e_ident: pointer to array containing elf magic number
 *Description: Magic number are seperated by space
 *
 */
void print_magic(unsigned char *e_ident)
{
	int i;

	printf("  Magic:	");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x", e_ident[i]);
		if (i == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}
/**
 *print_class - prints the class of elf header
 *@e_ident: apointer to djbdhjb
 *
 *
 */
void print_class(unsigned char *e_ident)
{
	printf("  Class:			");
	switch (e_ident[EI_CLASS])
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
		printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}
/**
 *print_data - prints data of the ELF h
 *@e_ident: pointer
 *
 */
void print_data(unsigned char *e_ident)
{
	printf(" Data:				");
	switch (e_ident[EI_DATA])
	{
	case ELFDATANONE:
		printf("none\n");
		break;
	case ELFDATA2LSB:
		printf("2's complement, little endian\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}
/**
 *print_abi - prints the abi version
 *@e_ident: pointer
 */
void print_abi(unsigned char *e_ident)
{
	printf("  ABI Version:					%d\n",
		e_ident[EI_ABIVERSION]);
}
