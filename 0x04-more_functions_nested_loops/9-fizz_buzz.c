#include "main.h"

/**
 * main - print from 1 to 100 changing the multiples of 3 and 5 .
 * Return: zero (Success)
 */
int main(void)
{
	int i;

	for (i = 1 ; i <= 100 ; i++)
	{
		if ((i % 3) == 0 && (i % 5) == 0)
		{
			printf("FizzBuzz ");
		}
		else if ((i % 3) == 0)
		{
			printf("Fizz ");
		}
		else if ((i % 5) == 0)
		{
			printf("Buzz ");
		}
		else
			printf("%d ", i);
	}
	return (0);
}
