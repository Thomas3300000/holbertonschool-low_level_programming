#include "main.h"

/**
 * **alloc_grid - function that returns a pointer to
 * a 2 dimensional array of integers
 * @width: numbers columns
 * @height: numbers line
 *
 * Return: NULL if width or heiht <= 0 , NULL if failed or return tab
 */
int **alloc_grid(int width, int height)
{
	int **tab;
	int a, b;

	if (width <= 0)
		return (NULL);
	if (height <= 0)
		return (NULL);

	tab = malloc(height * sizeof(int *));

	if (tab == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		tab[a] = malloc(width * sizeof(int));
		{
			if (tab[a] == NULL)
				return (NULL);
		}
	}

	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
		{
			tab[a][b] = 0;
		}
	}

	return (tab);
}
