#include "main.h"

/**
* puts2 - function that prints every other character of a string
* starting with the first character
* @str: string
*/

void puts2(char *str)
{
	int num_char;

	for (num_char = 0; str[num_char] != '\0'; num_char++)
	{
		if (num_char % 2 == 0)
		{
			_putchar(str[num_char]);
		}
	}
	_putchar('\n');
}
