#include "main.h"

/**
 * _strcmp - compares pointers to two strings.
 * @s1: a pointer to the 1st string.
 * @s2: a pointer to the 2nd string.
 * Return: 0 if s1 = s2,
 * negative difference if s1 < s2,
 * positive difference if s1 > s2.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
