#include "main.h"

/**
 * print_number - prints an integer.
 * @n: input integer.
 */
void print_number(int n)
{
	unsigned int m, d, i;

	if (n < 0)
	{
		_putchar(45);
		m = n * -1;
	}
	else
	{
		m = n;
	}

	d = m;
	i = 1;

	while (d > 9)
	{
		d /= 10;
		i *= 10;
	}

	for (; i >= 1; i /= 10)
	{
		_putchar(((m / i) % 10) + 48);
	}
}
