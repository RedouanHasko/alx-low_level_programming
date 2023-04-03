#include "main.h"

/**
* _strspn - Locates a character in a string.
* @s: This is the main C string to be scanned.
* @accept: This is the string containing the list of characters to match in s.
* Return: number of bytes in the initial segment of s
* which consist only of bytes from accept
*/
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	int n = 0;
	char *s1, *s2;

	s1 = s;
	s2 = accept;

	i = 0;
	while (s1[i] != '\0')
	{
		j = 0;
		while (s2[j] != '\0')
		{
			if (s2[j] == s1[i])
			{
				n++;
				break;
			}
			j++;
		}
		if (s[i] != accept[j])
		{
			break;
		}
		i++;
	}
	return (n);
}
