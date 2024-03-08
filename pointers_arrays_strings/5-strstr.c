#include "main.h"
#include <stddef.h>

/**
* _strstr - function that locates a character in a string
* @haystack: string to search in
* @needle: substring to locate
* Return: pointer to the beginning of the located substring
* or NULL if the substring is not found.
*/

char *_strstr(char *haystack, char *needle)
{
	int index, index_bis;

	if (needle[0] == '\0')
	{
		return (haystack);
	}

	for (index = 0; haystack[index] != '\0'; index++)
	{
		if (haystack[index] == needle[0])
		{
			for (index_bis = 0; needle[index_bis] != '\0'; index_bis++)
			{
				if (haystack[index + index_bis] != needle[index_bis])
					break;
			}
			if (needle[index_bis] == '\0')
				return (haystack + index);
		}
	}
	return (NULL);
}
