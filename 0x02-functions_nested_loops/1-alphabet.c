#include "main.h"
/**
 * main: prints_alphabet, followed by a new line.
 * print_alphabet - Prints the alphabet in lowercase.
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;

	}
	_putchar('\n');

}
