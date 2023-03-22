#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - print all the numbers from the input number till 98
 * @n: the input number
 */
void print_to_98(int n)
{
	int i = 0;

	if (n < 98)
	{
		for (i = n ; i <= 98 ; i++)
		{
			printf("%d, ", i);
		}
	} else if (n > 98)
	{
		for (i = n ; i >= 98 ; i--)
		{
			printf("%d, ", i);
		}
	} else
	{
		printf("%d", n);
	}
}