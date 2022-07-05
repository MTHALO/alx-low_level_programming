#include "main.h"
/**
 * main - prints_alphabet, followed by a new line.
 * Description:prints_alphabet
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
