#include "main.h"

/**
 * print_most_numbers - check the code
 *
 * Return: 0.
 */

void print_most_numbers(void)
{
	int num = 0;

	for (num = 0; num <= 9; num++)
	{
		if (num != 2 && num != 4)
		{
			_putchar(num + '0');
		}
	}
	_putchar('\n');
}

