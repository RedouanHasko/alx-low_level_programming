#include "main.h"

/**
 * print_square - print the character '#' size times .
 * @size: the size of the square
 */
void print_square(int size)
{
	int i, j;

	while (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0 ; i < size ; i++)
	{
		for (j = 0 ; j < size ; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
