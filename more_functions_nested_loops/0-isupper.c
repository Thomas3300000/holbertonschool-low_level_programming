#include "main.h"

/**
 *  _isupper -  function that checks for uppercase character.
 * @c: letters checked.
 *
 * Return: 0 for lowercase, 1 for uppercase.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);
}
