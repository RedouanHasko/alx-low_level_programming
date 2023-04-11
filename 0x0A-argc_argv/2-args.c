#include "main.h"
/**
 * main - Entry point prints all arguments it receives
 * @argc: counter of arguments
 * @argv: the array of the arguments
 * Return: zero (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0 ; i < argc ; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
