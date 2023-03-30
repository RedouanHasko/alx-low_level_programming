#include "main.h"

/**
 * rot13 - encodes a string using rot13.
 * @s: input string.
 * Return: the encoded string.
 */
char *rot13(char *s)
{
	int i, j = 0;
	char inputs[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char outputs[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(s + j) != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (*(s + j) == inputs[i])
			{
				*(s + j) = outputs[i];
				break;
			}
		}
		j++;
	}
	return (s);
}
