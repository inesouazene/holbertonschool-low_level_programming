#include "main.h"
#include <stdio.h>

/**
* _memcpy - function that copies memory area
* @dest: Pointer to the destination memory area
* @src: pointer to the source memory area
* @n: number of bytes to copy
* Return: pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		src[i] = dest[i];
	}

	return (dest);
}
