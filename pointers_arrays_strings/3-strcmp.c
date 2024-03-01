#include "main.h"
#include <stdio.h>

/**
 * _strcmp - function that compares two strings
 * @s1: character string 1
 * @s2: character string 2
 *
 * Return: difference value betwen twice characters
 */
int _strcmp(char *s1, char *s2)
{

	for (; *s1 != '\0'; s1++)
	{
		for (; *s2 != '\0'; s2++)
		{
			if (*s1 != *s2)
			{
				return (*s1 - *s2);
			}
			else
			{
				return (0);
			}
		}
	}
	return (0);
}
