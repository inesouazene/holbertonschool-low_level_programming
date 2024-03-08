#include "main.h"
#include <stddef.h>

/**
* print_chessboard - function that prints the chessboard.
* @a: 2D array to print
*/

void print_chessboard(char (*a)[8])
{
	int index, index_bis;

	for (index = 0; index < 8; index++)
	{
		for (index_bis = 0; index_bis < 8; index_bis++)
		{
			_putchar(a[index][index_bis]);
		}
	_putchar('\n');
	}

}
