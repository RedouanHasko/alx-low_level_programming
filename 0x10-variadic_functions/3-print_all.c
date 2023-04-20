#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function.
 */
void print_all(const char * const format, ...)
{
	int i = 0, len, f;
	char *str;
	char c;
	va_list ap;

	len = strlen(format);
	va_start(ap, format);
	while (format != NULL && i < len)
	{
		c = format[i];
		if (c != 'c' || c != 'i' || c != 'f' || c != 's')
			i++;
		else
		{
			switch (format[i])
			{
				case 'c':
					printf("%c", va_arg(ap, int));
					break;
				case 'i':
					printf("%i", va_arg(ap, int));
					break;
				case 'f':
					printf("%f", va_arg(ap, double));
					break;
				case 's';
					str = va_arg(ap, char *);
					if (str == NULL)
						str = "(nil)";
					printf("%s", str);
					break;
			}
			if (i < len - 1)
				printf(", ");
			i++;
		}
	}
	printf("\n");
	va_end(ap);
}
