#include "main.h"

/**
 * binary_to_uint - function that converts a binary number
 * to an unsigned int.
 *
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if b is NULL or if there
 * if one or more chars in the string b that is not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal_value, power;
	int length;

	if (b == NULL)
		return (0);

	for (length = 0; b[length]; length++)
	{
		if (b[length] != '0' && b[length] != '1')
			return (0);
	}

	for (power = 1, decimal_value = 0, length--; length >= 0; length--, power *= 2)
	{
		if (b[length] == '1')
			decimal_value += power;
	}

	return (decimal_value);
}
