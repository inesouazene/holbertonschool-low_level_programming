#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Entry point
*
* Return: always 0
*/



int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* find the last digit */
	int LastDigit;

	LastDigit = n % 10;

	/* print the last digit */
	if (LastDigit > 5)
	{
		printf("Last digit of %d is greater than 5\n", n);
	}
	else if (LastDigit == 0)
	{
		printf("Last digit of %d is 0\n", n);
	}
	else
	{
		printf("Last digit of %d is less than 6 and not 0\n", n);
	}
	return (0);
}
