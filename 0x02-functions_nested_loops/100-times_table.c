#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0.
 * @n: the number to prints it times table.
 */
void print_times_table(int n)
{
	int r, c, x;

	if (n > 15 || n < 0)
	{
		return;
	}

	for (r = 0; r <= n ; r++)
	{
		_putchar('0');
		for (c = 0; c <= n ; c++)
		{
			_putchar(',');
			_putchar(' ');
			x = r * c;

			if (x <= 99 || x <= 9)
			{
				_putchar(' ');
			}
			if (x >= 100)
			{
				_putchar((x / 100) + '0');
				_putchar(((x / 10) % 10) + '0');
			}
			else if (x <= 99 && x >= 10)
			{
				_putchar((x / 10) + '0');
			}
			_putchar((x % 10) + '0');
		}
		_putchar('\n');
	}
}
