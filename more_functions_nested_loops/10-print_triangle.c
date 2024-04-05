#include "main.h"

/**
* print_diagonal - function that prints a triangle,
* followed by a new line.
* @size: is size of the triangle
*/

void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		int index, index_bis;

		for (index = 1; index <= size; index++)
		{
			for (index_bis = index; index_bis < size; index_bis++)
			{
				_putchar(' ');
			}

			for (index_bis = 1; index_bis <= index; index_bis++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
