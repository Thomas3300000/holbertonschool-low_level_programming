#include <stdio.h>

/**
 * print_to_98 -  prints all natural numbers from n to 98
 * @n: number checked
 *
 * Return: Always 0.
 */

void print_to_98(int n)
{
	while (n != 98)
	{
		if (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
		else
		{
			printf("%d, ", n);
			n++;
		}
	}
	printf("98");
	printf("\n");

}

