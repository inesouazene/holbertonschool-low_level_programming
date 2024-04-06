#include "main.h"
#include "2-get_bit.c"

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
	if (index > 32)
		return (-1);
	(*n) |= 1 << index;
	if (get_bit((*n), index) == 1)
		return (1);
	return (-1);
}
