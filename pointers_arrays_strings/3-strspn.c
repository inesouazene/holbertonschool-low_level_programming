#include "main.h"
#include <stddef.h>

/**
* _strspn - function that returns length of prefix substring
* @s: string to explore
* @accept: accepted char
* Return: number of bytes in the initial segment of s
* which consist only of bytes from accept
*/

unsigned int _strspn(char *s, char *accept)
{
	int index;
	int index_sub;
	unsigned int num_bytes = 0;

	for (index = 0; s[index] != '\0'; index++)
	{
		for (index_sub = 0; s[index_sub] != '\0'; index_sub++)
		{
			if (s[index] == accept[index_sub])
			{
			num_bytes++;
			break;
			}
		}
		if (s[index_sub] == '\0')
		{
		return (num_bytes);
		}
	}
	return (num_bytes);
}
