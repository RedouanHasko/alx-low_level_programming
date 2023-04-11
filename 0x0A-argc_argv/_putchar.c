#include "unistd.h"
/**
 * _putchar - prints a character
 * @c: the character to print
 */
void _putchar(char c)
{
	write(1, &c, 1);
}
