#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* _strdup - function that returns a pointer to a newly allocated space
* in memory, which contains a copy of the string given as a parameter.
* @str: string to copy
* Return: a pointer to the duplicated string, or NULL
*/

char *_strdup(char *str)
{
	int index;
	int c = 0;
	char *tab;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[c] != '\0')
	{
		c++;
	}

	tab = malloc(c + 1 * sizeof(char));

	if (tab == NULL)
	{
		return (NULL);
	}

	for (index = 0; index < c; index++)
		{
		tab[index] = str[index];
		}
		return (tab);
}
