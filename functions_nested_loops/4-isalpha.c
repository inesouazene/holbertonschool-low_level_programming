#include "main.h"

/**
* _isalpha - main function to check for letter in lowercase or lowercase
* @c: char to check
* Return: 1 if c is in lowercase, 0 otherwise
*/

int _isalpha(int c)
{
	if ((c >= 'a' &&  c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
