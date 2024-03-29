#include "main.h"

/**
 * reverse_array - reverse an array of integers
 * @a: an array of integers
 * @n: the number of elements to reverse
 *
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int i, j, temp;

	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}

