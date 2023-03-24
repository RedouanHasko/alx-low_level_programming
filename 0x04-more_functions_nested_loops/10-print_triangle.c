#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line.
 * @size: is the size of the triangle.
 */
void print_triangle(int size)
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
			if (j >= (size - 1) - i)
			{
				_putcahr('#');
			}
			else
			{
				_putchar(' ');
			}
		}
		_putchar('#');
	}
}
