#include "main.h"

/**
 * _strstr - finds the first occurrence of the substring needle in haystack
 * @haystack: main string ti check
 * @needle: to be searched on the main string
 * Return: a pointer or Null
 */
char *_strstr(char *haystack, char *needle)
{
	char *s1, *s2;

	while (*haystack != '\0')
	{
		s1 = haystack;
		s2 = needle;
		while (*haystack != '\0' && *s2 != '\0' && *haystack == *s2)
		{
			haystack++;
			s2++;
		}
		if (*s2 == '\0')
		{
			return (s1);
		}
		haystack = s1 + 1;
	}
	return (0);
}
