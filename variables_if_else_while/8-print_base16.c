#include <stdio.h>

/**
* main - Entry point
*
* Return: always 0
*/


int main(void)
{
	int n;
	char alpha;

	/* for loop to get numbers 0 to 9 - base 16 */
	for (n = 0; n <= 9; n++)
	{
		putchar('0' + n);
	}


	/* for loop to get letters a to f - base 16 */
	for (alpha = 'a'; alpha <= 'f'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
