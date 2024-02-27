#include "main.h"

/**
* print_line - function that draws a straight line in terminal
* @n: number of times the char _ is printed
*/

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n <= i)
		{
			_putchar('\n');
		}
		_putchar('_');
	}
	_putchar('\n');
}
