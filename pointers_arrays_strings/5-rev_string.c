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
	int cpt;
	int b;
	int tempo;
	int c = 0;

	for (cpt = 0; s[cpt] != '\0'; cpt++)
	{
	}
	c = cpt - 1;
	for (b = 0; b <= c; b++, c--)
	{
		tempo = s[b];
		s[b] = s[c];
		s[c] = tempo;
	}

}
