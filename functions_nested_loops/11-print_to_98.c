#include <stdio.h>
#include "main.h"

/**
* print_to_98 - that prints all natural numbers from n to 98
* followed by a new line
* @n: start to print from thius number
*/

void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
		}
	}
	else if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
		}


	}
	printf("\n");

}
