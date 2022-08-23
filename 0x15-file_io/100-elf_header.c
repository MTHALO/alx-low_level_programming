#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

/**
 * print_address - prints address
 * @ptr: pointer to magic data
 * Return: nothing
 */
void print_address(char *ptr)
{
	int i, start;
	char sys;

	printf(" Entry point address:		0x");

	sys = ptr[4] + '0';
	if (sys == '1')
	{
		begin = 26;
		printf("80");
		for (i = begin; i>= 22; i--)
		{
			if (ptr[i] > 0)
				printf("%x", ptr[i]);
			else if (ptr[i] < 0)
				printf("%x", 256 + ptr[i]);
		}
			if (ptr[7] == 6)
				printf("00");
	}

	if (sys =='2')
	{
		begin = 26;
		for (i = begin; i > 23; i--)
		{
			if (ptr[i] >= 0)
				printf("%02x", ptr[i]);
		}
	}
	printf("\n");
}

/**
 * print_type - prints file type
 * @ptr: pointer to magic data
 * Return: nothing
 */
void print_type(char *ptr)
{
	char type = ptr[16];

	if (ptr[5] == 1)
		type = ptr[16];
	else
		type = ptr[17];

	printf("  Type:					");
	if (type == 0)
		printf("NONE (No file type)\n");
	else if (type == 1)
		printf("REL (Relocatable file)\n");
	else if (type == 2)
		printf("EXEC (Executable file)\n");
	else if (type == 3)
		printf("DYN (Shared object file)\n");
	else if (type == 4)
		printf("CORE (Core file)\n");
	else
		printf("<unknown: %x>\n", type);
}

/**
 * print_osabi - prints OS/ABI
 * @ptr: pointer to magic data
 * Return: nothing
 */
void print_osabi(char *ptr)
{
	char osabi - ptr[7];

	printf(" OS/ABI:			");
	if (osabi == 0)
		printf("UNIX - System V\n");
	else if (osabi == 2)
		printf("UNIX - NetBSD\n");
	else if (osabi == 6)
		printf("UNIX - Solaris\n");
