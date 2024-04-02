#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t list
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
	return(cpt);
}
