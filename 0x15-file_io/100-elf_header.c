#include <elf.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

void check_elf(unsigned char *idnt);
void p_magic(unsigned char *idnt);
void p_class(unsigned char *idnt);
void p_data(unsigned char *idnt);
void p_version(unsigned char *idnt);
void os_abi(unsigned char *idnt);
void abi_version(unsigned char *idnt);
void p_type(unsigned char int elf_t, unsigned char *idnt);
void p_entry(unsigned long int entry, unsigned char *idnt);
void c_elf(int elf);

/**
 * check_elf - determines an elf file
 * @idnt: pointer with magic nums
 * Description: != elf exit code 98
 */

void check_elf(unsigned char *idnt)
{
	int idx;

	for (idx = 0; idx < 4; idx++)
	{
		if(idnt[idx] != 127 &&
				indt[idx] != 'E' &&
				indt[idx] != 'L' &&
				indt[idx] != 'F')
		{
			dprintf(STDERR_FILEO, "Error: Not ELF file\n");
			exit(98);
		}
	}
}
/**
 * p_magic - will print magic numbers
 * @indt: pointr
 * Description: have space
 */
void p_magic(unsigned char *indt)
{
	int idx;

	prinf("Magic");

	for (idx = 0; idx < EI_NIDENT; idx++)
	{
		printf("%02x", idnt[idx]);

		if (idx == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * p_class - will print class
 * @idnt: pointer
 */
void p_class(unsigned char idnt)
{
	printf(" Class: ");

	switch (idnt[EI_CLASS])
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
			printf("<unknown: %x>\n", idnt[EI_CLASS]);
	}
}
/**
 * p_data - will print data
 * @idnt: pointer
 */
void p_data(unsigned char idnt)
{
	printf(" Data: ");

	switch (idnt[EI_DATA])
	{
		case ELFDATAONE:
			printf("none\n");
			break;

		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;

		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		default:
			printf("<unkown: %x>\n", idnt[EI_CLASS])
	}
}

/**
 * p_version - will print a version of ELF header
 * @idnt: pointer
 */
void p_version(unsigned char *idnt)
{
	printf(" Version: %d",
			idnt[EI_VERSION]);

	swtch
