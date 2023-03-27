#include "main.h"

/**
 * _strcpy - copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 * @dest: where to copy.
 * @src: the string to copy.
 * Return: string (Success)
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	int x = 0;

	while (*(src + x) != '\0')
	{
		x++;
	}
	for (i = 0 ; i < x ; i++)
	{
		dest[i] = src[i];
	}
	dest[x] = '\0';
	return (dest);
}
