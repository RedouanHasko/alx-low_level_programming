#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Zero (Success)
 */
int main(void)
{
	int x, y;
	int i = 0;

	for (x = 0 ; x <= 98 ; x++)
	{
		for (y = x + 1 ; y <= 99 ; y++)
		{
			putchar((x / 10) + '0');
			putchar((x % 10) + '0');
			putchar(' ');
			putchar((y / 10) + '0');
			putchar((y % 10) + '0');
			if (i != 4949)
			{
				putchar(',');
				putchar(' ');
			}
			i++;
		}
	}
	return (0);
}
