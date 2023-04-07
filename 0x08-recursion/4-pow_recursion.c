#include "main.h"

/**
 * _pow_recursion - returns the value of raised x to the power of y
 * @x: number.
 * @y: number.
 * Return: 1 if y equals to 0, -1 if y is lower than 0,
 * otherwise returns the result of raised x to the power of y.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, (y - 1)));
}
