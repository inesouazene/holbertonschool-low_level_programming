#include "main.h"

/**
 * reverse_array - reverses an array of integers
 * @a: array to be reversed
 * @n: number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int start_index, end_index, tmp;

	end_index = n - 1;

	for (start_index = 0; start_index < n / 2; start_index++)
	{
		tmp = a[start_index];
		a[start_index] = a[end_index];
		a[end_index--] = tmp;
	}
}
