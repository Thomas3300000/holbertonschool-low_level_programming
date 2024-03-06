#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string recursion
 * @s: string checked
 *
 * Return: sum characters string *s
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1) + _strlen_recursion(s + 1);
	}
	else
	{
		return (0);
	}
	return (0);
}
