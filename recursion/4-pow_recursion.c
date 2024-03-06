#include <stdio.h>
#include "main.h"

/**
* _pow_recursion - function that returns value of x raised to power of y
* @x: int to raise to the power of y
* @y: int that is the power
* Return: -1 if y is lower than 0 or 1 if y is 0
* otherwise result of the power
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
