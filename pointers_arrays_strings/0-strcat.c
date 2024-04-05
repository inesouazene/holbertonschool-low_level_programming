#include "main.h"

/**
 * _strcat - function that concatenates two strings.
 * @dest: string to append to
 * @src: string to add
 *
 * Return: a pointer to the dest resulting string containing
 * the concatened result
 */
char *_strcat(char *dest, char *src)
{
	int dest_index = 0, src_index = 0;

	while (dest[dest_index] != '\0')
		dest_index++;

	while (src[src_index] != '\0')
	{
		dest[dest_index] = src[src_index];
		src_index++;
		dest_index++;
	}

	dest[dest_index] = '\0';

	return (dest);
}
