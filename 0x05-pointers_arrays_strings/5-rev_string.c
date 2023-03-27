#include "main.h"

/**
 * rev_string - reverse a string.
 * @s: string to revers
 */
void rev_string(char *s)
{
	char rev = s[0];
	int i;
	int j = 0;

	while (s[j] != '\0')
	{
		j++;
	}
	for (i = 0 ; i < j ; i++)
	{
		j--;
		rev = s[i];
		s[i] = s[j];
		s[j] = rev;
	}
}
