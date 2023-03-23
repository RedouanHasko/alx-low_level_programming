#include "main.h"

/**
 * print_diagonal - print '\' n times diagonally
 * @n: number of times the character \ should be printed
 */
void print_diagonal(int n)
{
	int i, j;

	while (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0 ; i < n ; i++)
	{
		for (j = 0 ; j <= n ; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
