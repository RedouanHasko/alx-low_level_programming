#include "main.h"

/**
 * factorial - returns the factorial of a given number.
 * @n: the number to calculate its factorial.
 * Return: -1 if n lower than 0, 1 if the n = 1,
 * otherwise returns the factorial
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
