#include "main.h"
#include <stddef.h>

/**
* _strpbrk - function that searches a string for any of a set of bytes
* @s: string to explore
* @accept: string that contains the bytes to search for
* Return: pointer to the byte in s that matches one of the bytes in accept
* or NULL if no such byte is found
*/

char *_strpbrk(char *s, char *accept)
{
	int index, index_bis;

	for (index = 0; s[index] != '\0'; index++)
	{
		for (index_bis = 0; accept[index_bis] != '\0'; index_bis++)
		{
			if (s[index] == accept[index_bis])
			{
				return (s + index);
			}
		}
	}
	return (0);
}
