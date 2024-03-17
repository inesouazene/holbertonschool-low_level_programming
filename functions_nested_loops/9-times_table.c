#include "main.h"

/**
* times_table - function that prints the 9 times table, starting with 0.
*/

void times_table(void)
{
	int num1, num2, product;

	for (num1 = 0; num1 < 10; num1++)
	{
		for (num2 = 0; num2 < 10; num2++)
		{
			product = num1 * num2;

			if (num2 == 0)
			{
				_putchar('0');
			}

			else if (product < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + product);
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + (product / 10));
				_putchar('0' + (product % 10));
			}
		}
		_putchar('\n');
	}
}
