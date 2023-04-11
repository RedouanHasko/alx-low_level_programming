#include "main.h"
#include <stdlib.h>
/**
 * main - Entry point, prints the minimum number of coins,
 * to make change for an amount of money.
 * @argc: counter of arguments.
 * @argv: the array for argumrnts.
 * Return: 0 (Success).
 */
int main(int argc, char *argv[])
{
	int coins = 0, a;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	while (a > 0)
	{
		coins++;
		if ((a - 25) >= 0)
		{
			a -= 25;
			continue;
		}
		if ((a - 10) >= 0)
		{
			a -= 10;
			continue;
		}
		if ((a - 5) >= 0)
		{
			a -= 5;
			continue;
		}
		if ((a - 2) >= 0)
		{
			a -= 2;
			continue;
		}
		a--;
	}
	printf("%d\n", coins);
	return (0);
}
