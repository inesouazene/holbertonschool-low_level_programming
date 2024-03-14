#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* create_array - function that creates an array of chars,
* and initializes it with a specific char.
* @size: size of array to create
* @c: char to initialize
* Return: pointer to the array, or NULL if it fails
*/

char *create_array(unsigned int size, char c)
{
	char *tab;

	unsigned int index;

	if (size <= 0)
	{
		return (NULL);
	}
	tab = malloc(size * sizeof(char));

	if (tab == NULL)
	{
		return (NULL);
	}

	for (index = 0; index < size; index++)
		{
		tab[index] = c;
		}
		return (tab);
}
