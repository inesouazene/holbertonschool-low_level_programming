#include "variadic_functions.h"

/**
 * print_all - function that prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int index = 0;
	char *str;

	va_list list_arg;

	va_start(list_arg, format);

	while (format[index] && format)
	{
		if (index > 0)
			printf(", ");

		switch (format[index])
		{
			case 'c':
				printf("%c", va_arg(list_arg, int));
				break;
			case 'i':
				printf("%d", va_arg(list_arg, int));
				break;
			case 'f':
				printf("%f", va_arg(list_arg, double));
				break;
			case 's':
				str = va_arg(list_arg, char *);
				if (str == NULL)
					printf("(nil)");
				else
					printf("%s", str);
					break;
				default:
					index++;
					continue;
		}
		index++;
	}
	printf("\n");
	va_end(list_arg);
}
