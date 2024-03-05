#include "main.h"

/**
 * main - check the code
 * @a: multidimensionnal array to print
 *
 * Return: Always 0.
 */
void print_chessboard(char (*a)[8])
{
	int b;
	int c;

	b = 0;
	while (b < 8)
	{
		for (c = 0; c < 8; c++)
		{
			_putchar(a[b][c]);
		}
		_putchar('\n');
		b++;
	}
}
