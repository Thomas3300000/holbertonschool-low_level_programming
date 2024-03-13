#include "main.h"

/**
 * *_calloc - function that allocates memory for an array, using malloc
 * @nmemb: numbers elements
 * @size: size elements in bytes
 *
 * Return: pointers memory to allocate (a)
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int b;
	char *a;

	if (size == 0)
		return (NULL);
	if (nmemb == 0)
		return (NULL);

	a = malloc(nmemb * size);

	if (a == NULL)
		return (NULL);

	for (b = 0; b < nmemb * size; b++)
	{
		a[b] = '\0';
	}

	return (a);
}
