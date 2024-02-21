#include <stdio.h>

/**
* main - Entry point
*
* Return: always 0
*/


int main(void)
{
	/* variables definition */
	char lower = 'a';
	char upper = 'A';

	/* while loop for lowercase alphabet */
	while (lower <= 'z')
	{
		putchar(lower);
		lower++;
	}
	/* while loop for uppercase alphabet */
	while (upper <= 'Z')
	{
		putchar(upper);
		upper++;
	}
	putchar('\n');
	return (0);
}
