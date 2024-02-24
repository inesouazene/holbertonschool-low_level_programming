#include "main.h"

/**
* print_alphabet - Entry point
*
* Return: always 0
*/


void print_alphabet(void)
{
/* use of while loop and _putchar function to print alphabet */
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
