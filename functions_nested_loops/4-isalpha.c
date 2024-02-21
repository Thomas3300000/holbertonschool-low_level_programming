#include "main.h"

/**
 * _isalpha -  print a function that checks for alphabetic character.
 * @c: the character checked.
 *
 * Return: 0 is not a letter , 1 is a letter (lowercase or uppercase).
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);

	if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);
}
