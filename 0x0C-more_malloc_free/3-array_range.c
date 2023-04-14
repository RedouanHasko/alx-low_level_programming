#include "main.h"

/**
 * array_range - creates an array of integers.
 * @min: the min value of the array.
 * @max: the max value of the array.
 *
 * Return: the pointer to the newly created array.
 * otherwise returns NULL.
 */
int *array_range(int min, int max)
{
	int *new_array;
	int i;

	if (min > max)
	{
		return (NULL);
	}

	new_array = malloc(sizeof(*new_array) * ((max - min) + 1));

	if (new_array == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; min <= max ; i++, min++)
	{
		new_array[i] = min;
	}
	return (new_array);
}
