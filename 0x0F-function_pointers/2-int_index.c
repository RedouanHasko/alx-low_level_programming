#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 * @array : the input array.
 * @size: the number of elements in the array.
 * @cmp: pointer to the function to be used to compare values.
 *
 * Return: the index of the 1st element,
 * for which the cmp function does not return 0 .
 * If no element matches, return -1 .
 * If size <= 0, return -1 .
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}
	if (size <= 0)
	{
		return (-1);
	}
	for (i = 0 ; i < size; i++)
	{
		if (cmp(array[i]) == 1)
		{
			return (i);
		}
	}
	return (-1);
}
