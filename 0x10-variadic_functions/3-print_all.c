#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function.
 */
void print_all(const char * const format, ...)
{
	int i = 0, f;
	char *str;
	va_list ap;

	va_start(ap, format);
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ap, int));
				f = 0;
				break;
			case 'i':
				printf("%i", va_arg(ap, int));
				f = 0;
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				f = 0;
				break;
			case 's':
				str = va_arg(ap, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				f = 0;
				break;
			default:
				f = 1;
				break;
		}
		if (format[i + 1] != '\0' && f == 0)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(ap);
}
