#include "main.h"

/**
 * leet - encodes a string into 1337.
 * Letters a and A should be replaced by 4
 * Letters e and E should be replaced by 3
 * Letters o and O should be replaced by 0
 * Letters t and T should be replaced by 7
 * Letters l and L should be replaced by 1
 * @s: the input string.
 * Return: the modified string.
 */
char *leet(char *s)
{
	int i, j = 0;
	int upper[] = {65, 69, 79, 84, 76};
	int lower[] = {97, 101, 111, 116, 108};
	int numbers[] = {52, 51, 48, 55, 49};

	while (*(s + j) != '\0')
	{
		for (i = 0 ; i < 5 ; i++)
		{
			if (*(s + j) == upper[i] || *(s + j) == lower[i])
			{
				*(s + j) = numbers[i];
				break;
			}
		}
		j++;
	}
	return (s);
}
