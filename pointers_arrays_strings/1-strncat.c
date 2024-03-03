#include "main.h"
#include <stdio.h>

/**
* swap_int - function that swaps the values of two integers
* @a: first int to swap
* @b: second int to swap
*/

void swap_int(int *a, int *b)
{
	int tmp_a;

	tmp_a = *a;
	// int tmp_b = *b;

	*a = *b;
	*b = tmp_a;
}
