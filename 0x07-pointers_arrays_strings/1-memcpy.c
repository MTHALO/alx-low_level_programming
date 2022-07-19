#include "main.h"

/**
 * _memcpy - copies memory area
 * @src: memory area
 * @dest: destination memory area
 * @n: bytes filled
 * Return: *s dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) =  *(src + i);

	return (dest);
}
