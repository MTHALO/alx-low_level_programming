#include "main.h"

/**
 * print_rev - prints reversed string, followed by a new line
 * @s: pointer to the string to print
 * Return: void
 */

void rev_string(char *s)
{
	int i, max, half;
	char first, last;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	max = i - 1;
	half = max / 2;
	while (half >= 0)
	{
		first = s[max - half];
		last = s[half];
		s[half] = first;
		s[max - half] = last;
		half--;
	}
}
