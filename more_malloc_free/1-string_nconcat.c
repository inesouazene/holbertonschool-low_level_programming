#include "main.h"
#include <stdio.h>
#include <stdlib.h>

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
* malloc_checked - function that allocates memory using malloc.
* @s1: string one
* @s2: string two
* @n: number of bytes
* Return: to a newly allocated space in memory,
* which contains s1, followed by the first n bytes of s2,
* Or NULL
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int index, length1, length2;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	length1 = _strlen(s1);
	length2 = _strlen(s2);

	if (n < length2)
		length2 = n;

	concat = malloc(sizeof(char) * (length1 + length2 + 1));

	if (concat != NULL)
	{
		for (index = 0; index < length1; index++)
		{
			concat[index] = s1[index];
		}
		for (index = 0; index < length2; index++)
		{
			concat[index + length1] = s2[index];
		}
		concat[index + length1] = '\0';
		return (concat);
	}
	return (NULL);
}
