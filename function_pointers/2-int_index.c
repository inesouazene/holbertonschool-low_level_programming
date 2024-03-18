#include "function_pointers.h"

/**
* int_index - function that searches for an integer.
* @array: array to explore
* @size: number of elements in the array
* @cmp: pointer to the used function to compare values
* Return: index of the first element for which the cmp function
* does not return 0, if no element matches, return -1
* If size <= 0, return -1
*/

int int_index(int *array, int size, int (*cmp)(int))
{

	if (array != NULL || size > 0 || cmp != NULL)
	{
		int index;

		for (index = 0; index < size; index++)
		{
			if (cmp(array[index]))
				return (index);
		}
		return (-1);
	}
	return (-1);
}
