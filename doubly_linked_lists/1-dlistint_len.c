#include "lists.h"

/**
 * dlistint_len - function that returns the number of elements
 * in a linked dlistint_t list
 * @h: linked list
 *
 * Return: the number of elements in a linked
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t cpt = 0;

	while (h != NULL)
	{
		h = h->next;
		cpt++;
	}
	return (cpt);
}
