#include "variadic_functions.h"

/**
* print_numbers - function that prints numbers, followed by a new line
* @separator: string to be printed
* @n: number of arguments passed to the function
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int index;
	va_list list_arg;

	va_start(list_arg, n);

	for (index = 0; index < n; index++)
	{
		if (index > 0 && separator != NULL)
		{
			printf("%s", separator);
		}
		printf("%d", va_arg(list_arg, int));
	}

	va_end(list_arg);
	printf("\n");
}
