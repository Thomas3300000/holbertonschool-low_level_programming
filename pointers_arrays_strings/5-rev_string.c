#include "main.h"

/**
 * rev_string - function that reverses a string.
 * @s: string reverse
 *
 * Return: Always 0
 *
 */
void rev_string(char *s)
{
	int a;
	int b = 0;
	int c;

	for (a = 0; s[a] != '\0'; a++)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
	
	while (s[b])
	{
		b++;
	}

	for (c = b - 1; s[c] != '\0'; c--)
	{
		_putchar(s[c]);
	}
	_putchar('\n');
}
