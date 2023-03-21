#include "main.h"

/**
 * _abs - computes the absolute value of an int
 * @n: is the int
 *
 * Return: the absolute value of the int
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = n * -1;
	}
	return (n);
}
