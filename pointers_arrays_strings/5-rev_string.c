#include "main.h"

/**
* rev_string - function that reverses a string
* @s: string to reverse
*/

void rev_string(char *s)
{
	char *start = s;
	int length;
	char *end = s;

	for (length = 0; s[length] != '\0'; length++)
	{
	}

	while (*end != '\0')
	{
		end++;
	}

	while (start < end)
	{
		char temp = *start;

		*start = *end;
		*end = temp;
		start++;
		end--;
	}
}
