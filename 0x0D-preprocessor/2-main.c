#include "main.h"

/**
 * main - Entry point, prints the name of the file its compiled from.
 *
 * Return: zero (Success).
 */
int main(void)
{
	char *s = __FILE__;

	printf("%s\n", s);
	return (0);
}
