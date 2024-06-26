#include "main.h"

/**
 * print_binary - function that prints the binary representation
 * of a number.
 * @n: decimal number to print as binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int tmp;
	int num_bits;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (tmp = n, num_bits = 0; (tmp >>= 1) > 0; num_bits++)
	{
	}

	while (num_bits >= 0)
	{
		if ((n >> num_bits) & 1)
			_putchar('1');
		else
			_putchar('0');
		num_bits--;
	}
}
