#include <stdio.h>

/**
* main - Entry point
*
* Return: always 0
*/


int main(void)
{
	int n;

	/* for loop to get numbers 0 to 9 with separator */
	for (n = 0; n <= 9; n++)
	{
		putchar('0' + n);

		if (n < 9)
		{
		putchar(',');
		putchar(' ');
		}

	}
	putchar('\n');
	return (0);
}
