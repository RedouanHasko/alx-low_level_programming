#include "function_pointers.h"

/**
 * print_name - prints a name.
 * @name: the name to print.
 * @f: the function that prints the name.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != 0 && f != 0)
	{
		f(name);
	}
}
