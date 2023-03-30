#include "main.h"

/**
 * _strncat - function that concatenates two strings
 * @dest: 1st string.
 * @src: 2nd string.
 * @n: number of bytes from src.
 * Return: a pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, len = 0;

	while (dest[i++])
	{
		len++;
	}
	for (i = 0 ; src[i] && i < n ; i++)
	{
		dest[len++] = src[i];
	}
	return (dest);
}
