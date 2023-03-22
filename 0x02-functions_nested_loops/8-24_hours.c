#include "main.h"

/**
 * jack_bauer - print from 00:00 till 23:59
 */
void jack_bauer(void)
{
	int i, j, k, l;

	for (i = 0 ; i <= 2 ; i++)
	{
		for (j = 0 ; j <= 9 ; j++)
		{
			if ((i <= 1 && j <= 9) || (i <= 2 && j <= 3))
			{
				for (k = 0 ; k <= 5 ; k++)
				{
					for (l = 0 ; l <= 9 ; l++)
					{
						_putchar(i + '0');
						_putchar(j + '0');
						_putchar(':');
						_putchar(k + '0');
						_putchar(l + '0');
						_putchar('\n');
					}
				}
			}
		}
	}
}
