#include "main.h"

/**
 * print_alphabet - check the code.
 *
 * Return: 0
 */
int print_alphabet(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;
	}
	_putchar('\n');
	return (0);
}
