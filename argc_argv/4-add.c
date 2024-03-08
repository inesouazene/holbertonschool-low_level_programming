#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* main - function that add positive numbers.
* @argc: argument count
* @argv: argument vector
* Return: Always 0
*/

int main(int argc, char *argv[])
{
	int index, j, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (index = 1; index < argc; index++)
	{
		j = 0;
		for (j = 0; argv[index][j] != '\0'; j++)
		{
			if (!isdigit(argv[index][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[index]);
	}
	printf("%d\n", sum);
	return (0);
}
