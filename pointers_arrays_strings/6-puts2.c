#include "main.h"

/**
 * puts2 - prints every other character of a string
 * starting with the first character
 * @str: string checked
 *
 */
void puts2(char *str)
{
	int cpt;
	int a;

	for (cpt = 0; str[cpt] != '\0'; cpt++)
	{
	}
	for (a = 0; a < cpt; a += 2)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
