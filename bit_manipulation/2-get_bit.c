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
