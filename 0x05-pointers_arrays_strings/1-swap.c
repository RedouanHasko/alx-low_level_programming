#include "main.h"

/**
 * swap_int - swap the value of an int to another
 * @a: An int to swap with b
 * @b: The int to swap with a
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
