#include "lists.h"

/**
 * print_dlistint - function that prints all the elements
 * of a print_dlistint list
 * @h: linked list
 *
 * Return: the number of nodes
 *
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t cpt = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		cpt++;
	}
	return (cpt);
}
