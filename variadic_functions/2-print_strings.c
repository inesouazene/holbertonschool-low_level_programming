#include "variadic_functions.h"

/**
* print_strings - function that prints strings, followed by a new line
* @separator: string to be printed
* @n: number of arguments passed to the function
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int index;
	char *str_arg;

	va_list list_arg;

	va_start(list_arg, n);

	for (index = 0; index < n; index++)
	{
		str_arg = va_arg(list_arg, char *);

		if (index > 0 && separator != NULL)
		{
			printf("%s", separator);
		}
		if (str_arg == NULL)
		{
			printf("(nil)");
		}
		else
			printf("%s", str_arg);
	}
	va_end(list_arg);
	printf("\n");
}
