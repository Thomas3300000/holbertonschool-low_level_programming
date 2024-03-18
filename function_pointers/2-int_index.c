#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: array checked
 * @size: size to array
 * @cmp: function pointers
 *
 * Return: -1 if no elements matches or size <= 0  else return cpt
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int cpt;

	if (size <= 0)
		return (-1);
	if (array == NULL || cmp == NULL)
		return (-1);
	for (cpt = 0; cpt < size; cpt++)
	{
		if (cmp(array[cpt]))
		return (cpt);
	}

	return (-1);
}
