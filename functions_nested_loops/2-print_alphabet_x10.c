#include "main.h"

/**
* print_alphabet_x10 - Entry point
*
* Return: always 0
*/

void print_alphabet_x10(void)
{
/* use of while loop and _putchar function to print alphabet x10 */
	char m;
	char c = 'a';

	for (m = 0; m <= 9; m++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
