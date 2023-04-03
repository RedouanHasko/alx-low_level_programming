#include "main.h"

/**
 * _strchr - locates a character in a string.
 * @s: the input string.
 * @c: the character to locate.
 * Return: a pointer to the 1st occurrence of the character in the string.
 * or a 0 if the character is not found.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		return (s);
		++s;
	}
	if (*s == c)
	{
		return (s);
	}
	return (0);
}
