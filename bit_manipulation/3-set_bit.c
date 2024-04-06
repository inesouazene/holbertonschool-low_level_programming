#include "main.h"

#include "main.h"
/**
 * get_bit - function that returns the value
 * of a bit at a given index.
 * @n: number to look at
 * @index: index starting from 0, of the bit we want to get
 *
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int shifted_number;

	if (index > 64)
		return (-1);

	shifted_number = n >> index;

	return (shifted_number & 1);
}


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
