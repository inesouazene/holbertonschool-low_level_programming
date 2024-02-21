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
	int Lastn;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* find the last digit */
	Lastn = n % 10;

	/* print the last digit */
	if (Lastn > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, Lastn);
	}
	else if (Lastn == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, Lastn);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, Lastn);
	}
	return (0);
}
