#include "main.h"

/**
 * _islower -  print a function that checks for lowercase character.
 * @c: the character checked.
 *
 * Return: 0 if is false , 1 if is true.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
