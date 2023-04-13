#include "main.h"

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string to concat.
 * @s2: second string to concat.
 * @n: number of bytes.
 *
 * Return: pointer to the allocated memory (Success).
 * otherwise returns NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *cs;
	unsigned int i, len1 = 0, len2 = 0, len3 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	if (n >= len2)
		n = len2;
	len3 = len1 + n;
	cs = malloc(len3 + 1);
	if (cs == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; i < len3 ; i++)
	{
		if (i < len1)
			cs[i] = s1[i];
		else
			cs[i] = s2[i - len1];
	}
	cs[i] = '\0';
	return (cs);
}
