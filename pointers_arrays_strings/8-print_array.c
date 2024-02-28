#include <stdio.h>

/**
 * print_array - function that prints n elements of an array of integers
 * @a: array
 * @n: numbers elements  array
 *
 *
 */
void print_array(int *a, int n)
{
	int cpt;

	for (cpt = 0; cpt < n; cpt++)
	{
		printf("%d", a[cpt]);

		if (cpt != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
