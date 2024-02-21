#include <stdio.h>

/**
* main - Entry point
*
* Return: always 0
*/


int main(void)
{
	char letter;

	/* for loop for alphabet in lowercase */
	for (letter = 'a'; letter <= 'z'; letter++)
	{
	/* if statement to exlude e and q letters */
		if (letter != 'e' && letter != 'q')
		{
			putchar(letter);
		}
	}
	putchar('\n');
	return (0);
}
