#include "stdio.h"

/**
 * _memcpy - copies memory area.
 * @dest: the pointer where to past.
 * @src: the pointer where to copy.
 * @n: the numebr of bytes from the memory area src.
 *
 * Return: a pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
