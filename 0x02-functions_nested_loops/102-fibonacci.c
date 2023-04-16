#include <stdio.h>

/**
 * main - Entry point, prints the first 50 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 * Return: zero (Success).
 */
int main(void)
{
	int i;
	long long int a = 1, b = 2, f;
	
	f = a + b;
	printf("%lld, %lld", a, b);
	for (i = 3; i <= 50 ; i++)
	{
		printf(", %lld", f);
		a = b;
		b = f;
		c = a + b;
	}
	printf("\n");
	return (0);
}
