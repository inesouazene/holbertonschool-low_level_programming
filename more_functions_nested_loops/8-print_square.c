#include "main.h"

/**
* print_square - function that prints a square
* followed by a new line.
* @size: is the size of the square
*/

void print_square(int size)
{
	int i;

	for (i = 0; i < size; i++)
	{
		if (size <= i)
		{
			_putchar('\n');
		}
		_putchar('#');
	}
	_putchar('\n');
}
