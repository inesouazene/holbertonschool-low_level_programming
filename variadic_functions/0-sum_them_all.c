#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: number of arguments passed to the function
 *
 * Return: the sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int index;
	int sum = 0;
	va_list list_arg;

	if (n == 0)
		return 0;

	va_start (list_arg, n);

	for (index = 0; index < n; index++)
	{
		sum += va_arg(list_arg, int);
	}

	va_end(list_arg);
	return (sum);
}
