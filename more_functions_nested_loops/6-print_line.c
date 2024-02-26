#include "main.h"
/**
 * print_line - check the code
 * @n: the number of times the character _
 *
 * Return: 0.
 */
void print_line(int n)
{
	int line;

	for (line = 0; line < n; line++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
