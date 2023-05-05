#include "main.h"

/**
 * flip_bits - returns the number of bits need to be fliped
 * to get from one number to another.
 * @n: 1st number.
 * @m: 2nd number.
 *
 * Return: the number of bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int b;

	for (b = 0 ; n || m ; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
		{
			b++;
		}
	}
	return (b);
}
