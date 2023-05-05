#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: the adress of a input number.
 * @index: the index of the bit to manipulate.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int num;

	if (index > 63)
	{
		return (-1);
	}
	num = 1 << index;
	*n = (*n | num);
	return (1);
}
