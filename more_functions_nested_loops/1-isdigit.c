#include "main.h"

/**
* _isdigit - function that check for a digit
* @c: char to check
* Return: 1 if c is a digit, 0 otherwise
*/

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
