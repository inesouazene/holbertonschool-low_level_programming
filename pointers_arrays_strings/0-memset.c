#include "main.h"
#include <stdio.h>

/**
* _memset - function that fills memory with a constant byte
* @s: Pointer to the memory area to be filled.
* @b: constant byte to fill the memory area with
* @n: number of bytes to fill
* Return: pointer to memory area s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
