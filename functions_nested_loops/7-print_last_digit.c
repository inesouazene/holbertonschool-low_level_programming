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

/**
* print_last_digit - function that prints the last digit of a number.
* @num: int to get the last digit of
* Return: the value of the last digit
*/

int print_last_digit(int num)
{
	_putchar('0' + _abs(num % 10));
	return (_abs(num % 10));
}
