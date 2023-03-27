#include "main.h"

/**
 * puts2 - prints every other character of a string
 * starting with the first character, followed by a new line
 * @str: input string
 */
void puts2(char *str)
{
	int len = 0;
	char *ch = str;
	int i;

	while (*ch != '\0')
	{
		len++;
		ch++;
	}
	for (i = 0 ; i < len ; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
