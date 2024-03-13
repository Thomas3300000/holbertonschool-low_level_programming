#include "main.h"

/**
 * *array_range -  function that creates an array of integers
 * @min: min numbers
 * @max: max numbers
 *
 * Return: pointers
 */
int *array_range(int min, int max)
{
	int a, b;
	int *c;

	if (min > max)
		return (NULL);

	a = max - min + 1;

	c = malloc(a * sizeof(int));

	if (c == NULL)
		return (NULL);
	for (b = 0; b < a; b++)
	{
		c[b] = min + b;
	}

	return (c);
}
