#include "main.h"

/**
 * print_last_digit -  print a function that checks for lowercase character.
 * @n: the character checked.
 *
 * Return: 0
 */

int print_last_digit(int n)
{
	int digit = n % 10;

	if (digit < 0)
		digit *= -1;
	_putchar(digit + '0' );

	return (digit);
}
