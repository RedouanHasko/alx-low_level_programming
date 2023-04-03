#include "main.h"

/**
 * _strpbrk - mstches any character specified.
 * @s: This is the string to be scanned.
 * @accept: the string that one of its characters can matches on
 * of the characters in scanned string.
 * Return: string s that matches any character in accept.
 */
char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (*s == accept[j])
			{
				return (s);
			}
			j++;
		}
		s++;
	}
	return (0);
}
