#include "main.h"

/**
 * first -  function that check number is divisible
 * @num1: number checked
 * @num2: number divisor
 *
 * Return: 1 is prime or 0
 */
int first(int num1, int num2)
{
	if (num1 % num2 == 0)
		return (0);

	if (num2 == num1 / 2)
		return (1);

	return (first(num1, num2 + 1));
}

/**
 * is_prime_number -  function that returns 1 if the input integer
 * is a prime number, otherwise return 0
 * @n: number checked prime number
 *
 * Return: 1 if n is nummber prime or 0 otherwise
 */
int is_prime_number(int n)
{
	int a = 2;

	if (n <= 1)
		return (0);
	if (n >= 2 && n <= 3)
		return (1);
	return (first(n, a));
}
