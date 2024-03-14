#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* malloc_checked - function that allocates memory using malloc.
* @b: number of bytes to allocate memory
* Return: a pointer to the allocated memory
* if malloc fails, exit with a status value of 98
*/

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
