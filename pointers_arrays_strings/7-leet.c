#include "main.h"

/**
 * leet - encodes a string in 1337
 * @s: string to be encoded
 *
 * Return: the resulting string;
 */
char *leet(char *s)
{
	char alphaArr[] = "a4A4e3E3o0O0t7T7l1L1";
	int str_index;
	int leet_index;

	for (str_index = 0; s[str_index] != '\0'; str_index++)
	{
		for (leet_index = 0; alphaArr[leet_index] != '\0'; leet_index++)
		{
			if (s[str_index] == alphaArr[leet_index])
			{
				s[str_index] = alphaArr[leet_index + 1];
				break;
			}
		}
	}
	return (s);
}
