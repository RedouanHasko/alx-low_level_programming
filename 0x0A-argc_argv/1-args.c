#include "main.h"
/**
 * main - Entry point retrun the number of the arguments passed.
 * @argc: the counter of arguments.
 * @argv: the array of arguments.
 * Return: 0 (success).
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
