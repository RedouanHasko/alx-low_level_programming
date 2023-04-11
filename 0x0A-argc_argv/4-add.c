#include "main.h"
#include "stdlib.h"
/**
 * main - entry point, adds positive numbers
 * @argc: counter of arguments
 * @argv: array of the arguments
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int res = 0;
	int i;
	char *c;

	if (argc > 1)
	{
		for (i = 1 ; i < argc ; i++)
		{
			c = argv[i];
			if (*c < 47 || *c > 57)
			{
				printf("Error\n");
				return (1);
			}
			res += atoi(argv[i]);
		}
		printf("%d\n", res);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
