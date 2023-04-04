#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: pointer pointing to the beginning of the matrix.
 * @size: size of the matrix.
 */
void print_diagsums(int *a, int size)
{
	int i, j, pos, diag1 = 0, diag2 = 0;

	for (i = 0 ; i < size ; i++)
	{
		pos = (i * size) + i;
		diag1 = diag1 + *(a + pos);
	}
	for (j = 0 ; j < size ; j++)
	{
		pos = (j * size) + (size - 1 - j);
		diag2 = diag2 + *(a + pos);
	}
	printf("%d, %d\n", diag1, diag2);
}
