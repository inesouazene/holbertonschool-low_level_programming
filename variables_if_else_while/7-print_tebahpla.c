#include <stdio.h>

/**
* main - Entry point
*
* Return: always 0
*/


int main(void)
{
	char RevAlpha;

	/* for loop to get reverse alphabet */
	for (RevAlpha = 'z'; RevAlpha >= 'a'; RevAlpha--)
	{
		putchar(RevAlpha);
	}
	putchar('\n');
	return (0);
}
