#include "main.h"

/**
 * _strlen - ...
 * str: the string to count it letters.
 *
 * Return: the number counter.
 */
int _strlen(char *str)
{
	int count = 0;

	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}
