#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: zero always (Success)
 */
int main(void)
{
	int x, y;
	int i = 0;

	for (x = 0 ; x <= 8 ; x++)
	{
		for (y = x + 1 ; y <= 9 ; y++)
		{
			putchar(x + '0');
			putchar(y + '0');
			if (i != 44)
			{
				putchar(',');
				putchar(' ');
			}
			i++;
		}
	}
	putchar('\n');
	return (0);
}
