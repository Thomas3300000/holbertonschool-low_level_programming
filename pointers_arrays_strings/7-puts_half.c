#include "main.h"

/**
 * puts_half - function that prints half of a string
 * @str: string checked
 *
 */
void puts_half(char *str)
{
	int cpt;
	int a;

	for (cpt = 0; str[cpt] != '\0'; cpt++)
	{
		if (cpt % 2 == 1)
		{
			a = (cpt - 1) / 2;
			a += 1;
		}
		else
		{
			a = cpt / 2;
		}
	}

	while (a < cpt)
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}
