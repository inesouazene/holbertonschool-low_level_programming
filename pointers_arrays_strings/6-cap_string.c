#include "main.h"

/**
 * cap_string - capitalizes everey word of a string
 * @s: string to modify
 *
 * Return: the resulting string
 */
char *cap_string(char *s)
{
	int index, spe_index;

	char spe[13] = {' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'};

	for (index = 0; s[index] != '\0'; index++)
	{
		if (index == 0 && s[index] >= 'a' && s[index] <= 'z')
			s[index] -= 32;

		for (spe_index = 0; spe_index < 13; spe_index++)
		{
			if (s[index] == spe[spe_index])
			{
				if (s[index + 1] >= 'a' && s[index + 1] <= 'z')
				{
					s[index + 1] -= 32;
				}
			}
		}
	}

	return (s);
}
