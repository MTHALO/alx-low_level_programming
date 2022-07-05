#include "main.h"
/**
 * main: prints_alphabet, followed by a new line.
 * print_alphabet_x10 - Prints the alphabet 10 times.
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int round = 0;
	char letter = 'a';

	while (round < 10)
	{
		letter = 'a';
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');

		round++;
	}
}
