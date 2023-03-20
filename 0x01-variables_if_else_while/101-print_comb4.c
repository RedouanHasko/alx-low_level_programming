#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Zero (Success)
 */
int main(void)
{
	int x, y, z;
	int i = 0;

	for (x = 0 ; x <= 7 ; x++)
	{
		for (y = x + 1 ; y <= 8 ; y++)
		{
			for (z = y + 1 ; z <= 9 ; z++)
			{
				putchar(x + '0');
				putchar(y + '0');
				putchar(z + '0');
				if (i != 119)
				{
					putchar(',');
					putchar(' ');
				}
				i++;
			}
		}
	}
	putchar('\n');
	return (0);
}
