#include "main.h"

/**
 * set_bit - Function that sets the value
 * of a bit to 1 at a given index.
 * @n: integer to grab
 * @index: is the index, starting from 0
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int position;

	if (index > 64)
		return (-1);

	for (position = 1; index > 0; index--, position *= 2)
	{

	}
	*n += position;

	return (1);
}
