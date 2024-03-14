#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* _calloc - function that allocates memory for an array, using malloc.
* @nmemb: num of elements
* @size: num of bytes
* Return: a pointer to the allocated memory,
* Or NULL
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int index;
	char *concat;

	if (size == 0 || nmemb == 0)
		return (NULL);

	concat = malloc(nmemb * size);

	if (concat == NULL)
		return (NULL);

	for (index = 0; index < (nmemb * size); index++)
	{
		concat[index] = 0;
		return (concat);
	}
}
