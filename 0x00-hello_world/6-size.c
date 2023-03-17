#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	long int ln;
	long long int lln;
	char c;
	float flt;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(n));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(ln));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(lln));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(flt));
	return (0);
}
