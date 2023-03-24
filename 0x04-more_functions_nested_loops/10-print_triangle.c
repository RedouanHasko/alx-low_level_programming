#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line.
 * @size: is the size of the triangle.
 */
void print_triangle(int size)
{
	int i, j, k;

	while (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0 ; i < size ; i++)
	{
		for (j = size - i; j > 1 ; j--)
		{
			_putcahr(' ');
		}
		for (k = 0 ; k <= i ; k++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
