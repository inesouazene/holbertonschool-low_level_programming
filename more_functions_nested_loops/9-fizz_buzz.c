#include "main.h"
#include <stdio.h>

/**
* main - prints the numbers from 1 to 100, followed by a new line.
* But for multiples of three prints Fizz instead of the number
* and for the multiples of five prints Buzz
* Return: Always 0 (Success)
*/
int main(void)
{
	int index;

	for (index = 1; index <= 100; index++)
	{
		if (index % 3 == 0 && index % 5 != 0)
		{
			printf(" Fizz");
		} else if (index % 5 == 0 && index % 3 != 0)
		{
			printf(" Buzz");
		} else if (index % 3 == 0 && index % 5 == 0)
		{
			printf(" FizzBuzz");
		} else if (index == 1)
		{
			printf("%d", index);
		} else
		{
			printf(" %d", index);
		}
	}
	printf("\n");

	return (0);
}
