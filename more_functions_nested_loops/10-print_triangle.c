#include "main.h"
/**
 * print_triangle - function that prints a triangle, followed by a new line.
 * @size: the size of the triangle
 *
 * Return: 0
 */
void print_triangle(int size)
{
	int a;
	int b;
	int c;

	if (size > 0)
	{
		for (a = 0; a < size; a++)
		{
			for (b = 0; b < (size - a); b++)
			{
				_putchar(' ');
			}
			for (c = 0; c <= (size - b); c++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
