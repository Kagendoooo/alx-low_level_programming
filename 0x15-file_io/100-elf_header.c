#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <elf.h>

/**
 * _checkelf - checks if file is elf type
 * @hd: header
*/
void _checkelf(char *hd)
{
	if (hd[0] != 0x7f || hd[1] != 'E' || hd[2] != 'L' || hd[3] != 'F')
		dprintf(STDERR_FILENO, "Error: Wrong file type\n"), exit(98);
}

/**
 * _mgc - print elf magic
 * @hd: header
*/
void _mgc(char *hd)
{
	int x;

	printf("ELF Header:\n  Magic:   ");

	for (x = 0; x < 15; x++)
		printf("%02x ", (unsigned int)hd[x]);
	printf("%02x", (unsigned int)hd[x]);

	printf("\n");
}
/**
 * _class - print elf class
 * @hd: header
 * @x64: 1 if x64, 0 if x32
*/
void _class(char *hd, int x64)
{
	if (hd[4] != 1 && hd[4] != 2)
	{
		printf("<unknown: %02hx>\n", hd[4]);
		return;
	}
	printf("  %-35s", "Class:");
	if (x64 == 0)
		printf("ELF32\n");
	else if (x64 == 1)
		printf("ELF64\n");
}
/**
 * _data - print elf data
 * @hd: header
 * Return: No Return
*/
void _data(char *hd)
{
	printf("  %-35s", "Data:");
	printf("2's complement, ");
	if (hd[5] == 1)
		printf("little endian\n");
	else if (hd[5] == 2)
		printf("big endian\n");
	else
		printf("<unknown: %02hx>\n", hd[5]);
}
/**
 * _version - print elf version
 * @hd: header
*/
void _version(char *hd)
{
	printf("  %-35s", "Version:");
	if (hd[6] == EV_CURRENT)
	{
		printf("%d (current)\n", hd[6]);
	}
	else if (hd[6] != EV_CURRENT)
	{
		printf("%d\n", hd[6]);
	}
}
/**
 * _os - print elf os/ABI
 * @hd: header
*/
void _os(char *hd)
{
	printf("  %-35s", "OS/ABI:");

	if (hd[7] == 0)
		printf("UNIX - System V\n");
	else if (hd[7] == 1)
		printf("UNIX - HP-UX\n");
	else if (hd[7] == 2)
		printf("UNIX - NetBSD\n");
	else if (hd[7] == 3)
		printf("UNIX - Linux\n");
	else if (hd[7] == 4)
		printf("UNIX - GNU Hurd\n");
	else if (hd[7] == 6)
		printf("UNIX - Solaris\n");
	else if (hd[7] == 7)
		printf("UNIX - AIX\n");
	else if (hd[7] == 8)
		printf("UNIX - IRIX\n");
	else if (hd[7] == 9)
		printf("UNIX - FreeBSD\n");
	else if (hd[7] == 10)
		printf("UNIX - Tru64\n");
	else if (hd[7] == 11)
		printf("UNIX - Novell Modesto\n");
	else if (hd[7] == 12)
		printf("UNIX - OpenBSD\n");
	else if (hd[7] == 13)
		printf("UNIX - Open VMS\n");
	else if (hd[7] == 14)
		printf("UNIX - NonStop Kernel\n");
	else if (hd[7] == 15)
		printf("UNIX - AROS\n");
	else if (hd[7] == 16)
		printf("UNIX - Fenix OS\n");
	else if (hd[7] == 17)
		printf("UNIX - CloudABI\n");
	else
		printf("<unknown: %02hx>\n", hd[7]);
}
/**
 * _abiv - checks abi version
 * @hd: header
*/
void _abiv(char *hd)
{
	printf("  %-35s", "ABI Version:");
	printf("%d\n", hd[8]);
}
/**
 * _type - print elf type
 * @hd: header
 * @x64: variable to check if x64 (1) or x32 (0)
*/
void _type(char *hd, int x64)
{
	int xtyp = 17;

	(void) x64;

	if (hd[5] == 1)
		xtyp = 16;

	printf("  %-35s", "Type:");

	switch (hd[xtyp])
	{
		case 0:
			printf("NONE\n");
			break;
		case 1:
			printf("REL (Relocatable file)\n");
			break;
		case 2:
			printf("EXEC (Executable file)\n");
			break;
		case 3:
			printf("DYN (Shared object file)\n");
			break;
		case 4:
			printf("CORE (Core file)\n");
			break;
		default:
			printf("<unknown>: %02x\n", hd[xtyp]);
	}
}
/**
 * _entry - print elf entry point access by directly accesing
 * the elf header struct
 * @hd: header
 * @x64: check 1 for x64 and 0 x32
*/
void _entry(char *hd, int x64)
{
	int y = 27, z;

	printf("  %-35s0x", "Entry point address:");

	if (x64 == 1)
		y = 31;

	if (hd[5] == 1)
	{
		/* Little Endian */
		z = y;
		while (hd[z] == 0 && z > 24)
			z--;
		printf("%x", hd[z]);
		z--;

		while (z >= 24)
		{
			printf("%02x", (unsigned char) hd[z]);
			z--;
		}
	}
	else
	{
		/* Big Endian */

		z = 24;
		while (hd[z] == 0)
			z++;
		printf("%x", hd[z]);
		z++;

		while (z <= y)
		{
			printf("%02x", (unsigned char) hd[z]);
			z++;
		}
	}
	printf("\n");
}

/**
 * main - displays the information contained in the ELF header at
 * the start of an ELF file.
 * Usage: elf_header elf_filename
 * displayed information: (not less, not more)
 * Magic
 * Class
 * Data
 * Version
 * OS/ABI
 * ABI Version
 * Type
 * Entry point address
 * @argc: Counts the number of parameters that go into main
 * @argv: Pointer of array of pointers containing strings entering main
 * Return: Always 0 on (Success)
 * if the file is not an ELF file, or on error, exit with status code 98
 *  and display a comprehensive error message to stderr
*/
int main(int argc, char **argv)
{
	int fdelf, relf, closecheck, x64 = 0;
	char hd[32];

	if (argc != 2)
		dprintf(STDERR_FILENO, "Wrong # of Arguments\n"), exit(98);
	if (argv[1] == 0)
		dprintf(STDERR_FILENO, "Null name\n"), exit(98);
	fdelf = open(argv[1], O_RDONLY);
	if (fdelf == -1)
		dprintf(STDERR_FILENO, "Can't Open File\n"), exit(98);
	relf = read(fdelf, hd, 32);
	if (relf == -1)
		dprintf(STDERR_FILENO, "Error Reading File\n"), exit(98);

	_checkelf(hd);

	if (hd[4] == 2)
		x64 = 1;

	_mgc(hd);
	_class(hd, x64);
	_data(hd);
	_version(hd);
	_os(hd);
	_abiv(hd);
	_type(hd, x64);
	_entry(hd, x64);

	closecheck = close(fdelf);

	if (closecheck == -1)
		dprintf(STDERR_FILENO, "Error Closing File\n"), exit(98);

	return (0);
}
