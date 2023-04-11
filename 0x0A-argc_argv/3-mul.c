#include "main.h"
#include <stdlib.h>
/**
 * main - Entry point , multiples two numbers
 * @argc: the counter of arguments
 * @argv: the array of arguments
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int res = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	res = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", res);
	return (0);
}
