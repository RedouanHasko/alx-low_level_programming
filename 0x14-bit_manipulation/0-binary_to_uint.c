#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: is pointer to a string of 0 and 1 chars.
 *
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;
	int l, bt = 1;

	if (!b)
	{
		return (0);
	}
	for (l = 0; b[l] != '\0' ; l++)
	{
		if (b[l] != '0' && b[l] != '1')
		{
			return (0);
		}
	}
	for (l = l - 1 ; l >= 0 ; l--)
	{
		char c;

		c = b[l];
		if (c == '1')
		{
			n += bt;
		}
		bt *= 2;
		if (l == 0)
		{
			break;
		}
	}
	return (n);
}
