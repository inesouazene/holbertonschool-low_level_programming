#include "variadic_functions.h"

/**
 * print_all - unction that prints anything
 * @format: list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	int index = 0;
	char *str, *separator = "";

	va_list list_arg;

	va_start(list_arg, format);

	if (format)
	{
		while (format[index])
		{
			switch (format[index])
			{
				case 'c':
					printf("%s%c", separator, va_arg(list_arg, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(list_arg, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(list_arg, double));
					break;
				case 's':
					str = va_arg(list_arg, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", separator, str);
					break;
				default:
					index++;
					continue;
			}
			separator = ", ";
			index++;
		}
	}

	printf("\n");
	va_end(list_arg);
}
