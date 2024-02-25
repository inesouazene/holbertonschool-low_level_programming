#include "main.h"

/**
* _islower - main function to check for lowercase
* @c: char to check
* Return: 1 if c is in lowercase, 0 otherwise
*/

int _islower(int c)
{
	if (c >= 'a' &&  c <= 'z')
	{
		return (1);
	}
	return (0);
}
