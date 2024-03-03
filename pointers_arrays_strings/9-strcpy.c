#include "main.h"
#include <stdio.h>

/**
* _strcpy - function that copies the string pointed to by src
* @dest: string destination
* @src: string source
*
* Return: pointer to dest
*/

char *_strcpy(char *dest, char *src)
{

	int num_char;
	int i;

	for (num_char = 0; src[num_char] != '\0'; num_char++)
	{
	}
	for (i = 0; i < num_char; i++)
	{
		dest[i] = src[i];
	dest[i] = '\0';
	}

	return (dest);
}
