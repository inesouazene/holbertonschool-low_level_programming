#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* str_concat - function that concatenates two strings
* @s1: string one
* @s2: string two
* Return: pointer to a newly allocated space in memory which contains the
* contents of s1, followed by the contents of s2, or NULL on failure
*/

char *str_concat(char *s1, char *s2)
{
	int index, length1, length2;
	char *concat;

	length1 = 0, length2 = 0, index = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[index] != '\0')
	{
		index++;
		length1++;
	}

	index = 0;

	while (s2[index] != '\0')
	{
		index++;
		length2++;
	}
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
