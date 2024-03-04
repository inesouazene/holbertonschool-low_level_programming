#include "main.h"
#include <stddef.h>

/**
* _strchr - function that locates a character in a string
* @s: string
* @c: char to locate
* Return: pointer to the first occurence of char c in string s
* or NULL
*/

char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] != '\0'; index++)
	{
		if (s[index] == c)
		{
			return (s + index);
		}
	}
	if (c == '\0')
	{
		return (s + index);
	}
	return (NULL);
}
