#include "main.h"

/**
* _isupper - function that check for uppercase char
* @c: char to check
* Return: 1 if c is uppercase, 0 otherwise
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
