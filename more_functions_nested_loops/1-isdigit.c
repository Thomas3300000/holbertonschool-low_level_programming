#include "main.h"
#include <stdio.h>
/**
 *  _isdigit -  function that checks for a digit (0 through 9).
 * @c: numbers checked.
 *
 * Return: 0 for other , 1 for a digit .
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);

	else
		return (0);
}
