#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of array
 * @height: height of array
 * Return: NULL on failure or if height or width <= 0,
 * pointer to the array,
 */
int **alloc_grid(int width, int height)
{
	int **ptr;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	ptr = (int **) malloc(sizeof(int *) * height);
	if (ptr != NULL)
	{
		for (i = 0 ; i < height; i++)
		{
			ptr[i] = (int *) malloc(sizeof(int) * width);
			if (ptr[i] != NULL)
			{
				for (j = 0 ; j < width; j++)
				{
					ptr[i][j] = 0;
				}
			}
			else
			{
				while (i >= 0)
				{
					free(ptr[i]);
					i--;
				}
				free(ptr);
				return (NULL);
			}
		}
		return (ptr);
	}
	else
	{
		return (NULL);
	}
}
