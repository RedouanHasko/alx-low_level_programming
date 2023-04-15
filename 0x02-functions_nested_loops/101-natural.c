#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point calclate the sum of all natural numbers bellow 1024,
 * that multiples of 3 and 5 .
 * Return: 0 (Success).
 */
int main(void)
{
	int i, sum = 0;

	for (i = 0; i < 1024 ; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
