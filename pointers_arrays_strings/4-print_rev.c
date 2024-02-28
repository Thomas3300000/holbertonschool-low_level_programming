#include "main.h"

/**
 * print_rev - function that prints a string, in reverse
 * @s: string print
 *
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int a = 0;
	int b;

	while (s[a])
	{
		a++;
	}

	for (b = a - 1; s[b] != '\0'; b--)
	{
		_putchar(s[b]);
	}

	_putchar('\n');
}
