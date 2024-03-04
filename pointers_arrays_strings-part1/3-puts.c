#include "main.h"

/**
* _puts - function that prints a string
* @str: string to print
*/

void _puts(char *str)
{
	int num_char;

	for (num_char = 0; str[num_char] != '\0'; num_char++)
	{
		_putchar(str[num_char]);
	}
	_putchar('\n');
}
