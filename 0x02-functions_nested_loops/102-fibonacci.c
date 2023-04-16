#include <stdio.h>

/**
 * main - Entry point, prints the first 50 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 * Return: zero (Success).
 */
int main(void)
{
	int i;
	unsigned int a = 1, b = 2, f;

	printf("%lu, %lu", a, b);
	for (i = 2; i < 50 ; i++)
	{
		f = a + b;
		printf(", %lu", f);
		a = b;
		b = f;
	}
	printf("\n");
	return (0);
}
