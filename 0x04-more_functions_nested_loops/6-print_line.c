#include "main.h"

/**
 * print_line - print '_' n times.
 * @n: is the number of times the character _ should be printed.
 */
void print_line(int n);
{
	int i;

	while (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
