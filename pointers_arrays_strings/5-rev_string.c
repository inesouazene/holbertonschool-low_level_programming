#include "main.h"

/**
* _strlen - function that returns the length of a string
* @s: string to get length
* Return: length of the string
*/

int _strlen(char *s)
{
	int num_char;

	for (num_char = 0; s[num_char] != '\0'; num_char++)
	{
	}
	return (num_char);
}


/**
* rev_string - function that reverses a string
* @s: string to reverse
*/

void rev_string(char *s)
{
	int index;
	char tmp;

	for (index = 0; index < _strlen(s) / 2; index++)
	{
		tmp = s[index];
		s[index] = s[_strlen(s) - index - 1];
		s[_strlen(s) - index - 1] = tmp;
	}
}
