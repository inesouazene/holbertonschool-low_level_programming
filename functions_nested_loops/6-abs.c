#include "main.h"

/**
* _abs - function that computes absolute value of an int
* @n: int to check
* Return: n if n greater or equal to 0
* otherwise multiply n by -1 to get the absolute value of n because - * - = +
*/

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (-1 * n);
	}
}
