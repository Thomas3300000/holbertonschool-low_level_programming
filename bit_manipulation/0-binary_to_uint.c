#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: pointer to string of 0 and 1 char
 *
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num;
	int cpt1, cpt2;

	if (b == NULL)
		return (0);

	for (cpt1 = 0; b[cpt1] != '\0'; cpt1++)
	{
		if (b[cpt1] != '0' && b[cpt1] != '1')
			return (0);
	}

	num = 0;
	for (cpt2 = 0; b[cpt2] != '\0'; cpt2++)
	{
		num = num << 1;
		if (b[cpt2] == '1')
			num = num + 1;
	}

	return (num);
}
