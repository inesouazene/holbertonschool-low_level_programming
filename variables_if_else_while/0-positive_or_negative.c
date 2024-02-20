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
	/* my code */
	if (x > 0)
	{
		printf("n is positive \n");
	}
	else if (x < 0)
	{
		printf("n is negative \n");
	}
	else
	{
		printf("n is zero \n");
	}
	return (0);
}
