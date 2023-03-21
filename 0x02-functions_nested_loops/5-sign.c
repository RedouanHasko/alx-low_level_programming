#include "main.h"

/**
 * print_sign - check if the number is greater, less or equal to 0
 * @n: is the checked number
 *
 * Return: 1 if grater than 0 , -1 if less than 0 and 0 if euqals 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	_putchar('-');
	return (-1);
}
