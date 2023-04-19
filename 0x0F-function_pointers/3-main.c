#include "3-calc.h"

/**
 * main - Enty point.
 * @argc: counter of arguments.
 * @argv: array of arguments.
 *
 * Return: zero (Success).
 */
int main(int argc, char *argv[])
{
	int a, b;
	int (*fun)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	fun = get_op_func(argv[2]);

	if (fun == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", fun(a, b));
	return (0);
}
