#include "main.h"

/**
 * square - square root checked
 * @num1: integer 1
 * @num2: integer 2
 *
 *
 * Return: integer
 */
int square(int num1, int num2)
{
	if (num1 * num1 == num2)
	{
		return (num1);
	}
	if (num1 * num1 > num2)
	{
		return (-1);
	}
	return (square(num1 + 1, num2));
}

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: numbers square root
 *
 * Return: number square root or 0 or -1
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
	{
	       	return (0);
	}
	return (square(1, n));
}
