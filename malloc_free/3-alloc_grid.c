#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* alloc_grid - function that returns a pointer to a 2D array of integers
* @width: width of the array
* @height: height of the array
* Return: pointer to a 2D array of integers, or NULL on failure
*/

int **alloc_grid(int width, int height)
{
	int **tab, index, index2;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	tab = (int **)malloc(sizeof(int *) * height);
	if (tab == NULL)
		return (NULL);

	for (index = 0; index < height; index++)
	{
		tab[index] = (int *)malloc(sizeof(int) * width);
		if (tab[index] == NULL)
		{
			for (index2 = 0; index2 < index; index2++)
			{
				free(tab[index2]);
			}
			free(tab);
		}
	}
	for (index = 0; index < height; index++)
	{
		for (index2 = 0; index2 < width; index2++)
		{
			tab[index][index2] = 0;
		}
	}
	return (tab);
}
