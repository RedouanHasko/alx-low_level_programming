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
	int *array;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	array = malloc(sizeof(*array) * ((max - min) + 1));
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; min <= max ; i++)
	{
		array[i] = min;
	}
	return (array);
}
