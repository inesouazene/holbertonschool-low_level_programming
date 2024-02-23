#include <stdio.h>

/**
* main - Entry point
*
* Return: always 0
*/


int main(void)
{
	int n;

	/* for loop to get base 10 */
	for (n = 0; n <= 9; n++)
	{
		putchar('0' + n);
	}
	putchar('\n');
	return (0);
}
