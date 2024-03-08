#include <stdio.h>

/**
* main - function that multiplies two numbers.
* @argc: argument count
* @argv: argument vector
* Return: Always 0
*/

int main(int argc, char *argv[])
{
	int number1, number2;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}

	number1 = atoi(argv[1]);
	number2 = atoi(argv[2]);

	printf("%d\n", number1 * number2);

	return (0);
}
