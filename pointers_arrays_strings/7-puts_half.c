#include "main.h"

/**
* puts_half - function that prints half of a string
* followed by a new line.
* @str: string to be half printed
*/

void puts_half(char *str)
{
	int num_char;
	int half;

	for (num_char = 0; str[num_char] != '\0'; num_char++)
	{
	}

	half = num_char / 2;

	if (num_char % 2 != 0)
		half++;

	while (half < num_char)
	{
		_putchar(str[half]);
		half++;
	}
	_putchar('\n');
}
