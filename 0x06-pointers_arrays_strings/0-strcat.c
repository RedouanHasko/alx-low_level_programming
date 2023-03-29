#include "main.h"

/**
 * _strcat - concatenate two strings.
 * @dest: the first string.
 * @src: the second string.
 * Return: the result of the two comcatenated strings.
 */
char *_strcat(char *dest, char *src)
{
	int len = 0;
	int i;

	while (dest[len])
	{
		len++;
	}
	for (i = 0; src[i] != 0 ; i++)
	{
		dest[len] = src[i];
		len++;
	}
	dest[len] = '\0';
	return (dest);
}
