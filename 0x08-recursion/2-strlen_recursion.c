#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 * @s: the stirng to count it length.
 * Return: the number of characters in the string.
 */
int _strlen_recursion(char *s)
{
	int i = 1;

	if (*s == '\0')
	{
		return (0);
	}
	i += _strlen_recursion(s + 1);
	return (i);
}
