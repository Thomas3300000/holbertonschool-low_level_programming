#include "main.h"

/**
 * more_numbers - check the code
 *
 * Return: Always 0.
 */

void more_numbers(void)
{
	int num1;
	int num2;

	for (num1 = 0; num1 <= 9; num1++)
	{
		for (num2 = 0; num2 <= 14; num2++)
		{
			if (num2 >= 10 && num2 <= 14)
				_putchar('1');
			_putchar(num2  % 10 + '0');
		}
			_putchar('\n');
		}
}
