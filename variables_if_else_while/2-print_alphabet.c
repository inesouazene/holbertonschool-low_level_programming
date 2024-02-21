#include <stdio.h>

/**
* main - Entry point
*
* Return: always 0
*/


int main(void)
{
	/* variable definition */
	char alpha = 'a';

	/* while loop */
	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
