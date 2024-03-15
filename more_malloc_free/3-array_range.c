#include <stdlib.h>
#include "main.h"

/**
 * array_range - function that creates an array of integers.
 * @min: minimum range of values
 * @max: maximum range of values
 * Return: pointer to the new array created
 */
int *array_range(int min, int max)
{
	int *ptr;
	int index, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ptr = malloc(size * sizeof(int));

	if (ptr == NULL)
		return (NULL);

	for (index = 0; min <= max; index++)
	{
		ptr[index] = min++;
	}
	return (ptr);
}
