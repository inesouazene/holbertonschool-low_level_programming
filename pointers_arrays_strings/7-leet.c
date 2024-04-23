#include "main.h"

/**
 * leet - encodes a string in 1337
 * @s: string to be encoded
 *
 * Return: the resulting string;
 */
char *leet(char *s)
{
	int index, leet_index;

	char *a = "aAeEoOtTlL";
	char *b = "4433007711";

	for (index = 0; s[index] != '\0'; index++)
	{
		for (index = 0; leet_index < 10; leet_index++)
		{
			if (s[index] == a[leet_index])
			{
				s[index] = b[leet_index];
			}
		}
	}

	return (s);
}
