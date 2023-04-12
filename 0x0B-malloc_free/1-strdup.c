#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - return pointer to a newly allocated
 * space in memory, which contains a copy of the
 * string given as a parameter.
 * @str: String to be copied
 * Return: NULL if str = NULL, and a pointer to the duplicated string,
 * It returns NULL if insufficient memory was available.
 */
char *_strdup(char *str)
{
	char *cp;
	int i, len;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
	{
		len++;
	}
	cp = malloc(sizeof(char) * (len + 1));
	if (cp == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
	{
		cp[i] = str[i];
	}
	cp[len] = '\0';
	return (cp);
}
