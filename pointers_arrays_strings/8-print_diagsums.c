#include "main.h"
#include <stdio.h>
/**
 * print_diagsums -  function that prints the sum of the two diagonals 
 * of a square matrix of integers
 * @a: array
 * @size: size array
 *
 */
void print_diagsums(int *a, int size)
{
	int b;
	int diag1 = 0;
	int diag2 = 0;

	for (b = 0; b < size; b++)
	{
		diag1 = diag1 + a[(b * size) + b];
		diag2 = diag2 + a[(size - 1) + ((size - 1) * b)];
	}
	printf("%d, %d\n", diag1, diag2);
}
