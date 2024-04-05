#include "main.h"

/**
* print_rev - function that prints a string in reverse
* followed by a new line.
* @s: string to print
*/

void print_rev(char *s)
{
	int length;

	for (length = 0; s[length] != '\0'; length++)
	{
	}

	while (length > 0)
	{
		length--;
		_putchar(s[length]);
	}
	_putchar('\n');
}
