#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: the array of integers.
 * @n: the number if elements of the array.
 */
void reverse_array(int *a, int n)
{
	int b;
	int i;

	for (i = n - 1 ; i >= n / 2 ; i--)
	{
		b = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = b;
	}
}
