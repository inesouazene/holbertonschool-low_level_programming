#include "main.h"

/**
* _atoi - function that convert a string to an integer.
* @s: string to convert
*
* Return : converted integer
*/

int _atoi(char *s)
{
	int index, negSign_count, n, length, flag, digit;

	index = 0;
	negSign_count = 0;
	n = 0;
	length = 0;
	flag = 0;
	digit = 0;

	while (s[length] != '\0')
		length++;

	while (index < length && flag == 0)
	{
		if (s[index] == '-')
			++negSign_count;

		if (s[index] >= '0' && s[index] <= '9')
		{
			digit = s[index] - '0';
			if (negSign_count % 2)
				digit = -digit;
			n = n * 10 + digit;
			flag = 1;
			if (s[index + 1] < '0' || s[index + 1] > '9')
				break;
			flag = 0;
		}
		index++;
	}

	if (flag == 0)
		return (0);

	return (n);
}
