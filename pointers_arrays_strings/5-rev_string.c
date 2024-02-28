#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 *
 */
void rev_string(char *s)
{
	int a;
	
	for (a = 0; s[a] != '\0'; a++)
	{
		_putchar(s[a]);
	}

