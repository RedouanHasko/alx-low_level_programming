#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: the adress of the input number.
 * @index: the index of the bit to manipulate.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int num;

	if (index > 63)
	{
		return (-1);
	}
	num = 1 << index;
	if (*n & num)
	{
		*n ^= num;
	}
	return (1);
}
