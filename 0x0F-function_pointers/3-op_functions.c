#include "3-calc.h"

/**
 * op_add - add two intigers.
 * @a: the 1st int to add.
 * @b: the 2nd int to add.
 * Return: the sum of the two numbers.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substract two intigers.
 * @a: the 1st int to substract.
 * @b: the 2nd int to substract.
 * Return: the substraction of the two numbers.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply two intigers.
 * @a: the 1st int to multiply.
 * @b: the 2nd int to multiply.
 * Return: the multplication of the two numbers.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - devide two intigers.
 * @a: the 1st int to devide.
 * @b: the 2nd int to devide.
 * Return: the devision of two numbers.
 */
int op_div(int a, int b)
{
	if (b != 0)
	{
		return (a / b);
	}
	printf("Error\n");
	exit(100);
}

/**
 * op_mod - return modulo of two intigers.
 * @a: the 1st int.
 * @b: the 2nd int.
 * Return: the modulo of two numbers.
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
