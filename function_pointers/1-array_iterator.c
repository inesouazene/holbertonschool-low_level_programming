#include "function_pointers.h"

/**
* array_iterator - function that executes a function given as a parameter
* on each element of an array.
* @array: array to explore
* @size: size of the array
* @action: pointer to the used function
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{

	if (array != NULL || size > 0 || action != NULL)
	{
		size_t index;

		for (index = 0; index < size; index++)
		{
			action(array[index]);
		}
	}
}
