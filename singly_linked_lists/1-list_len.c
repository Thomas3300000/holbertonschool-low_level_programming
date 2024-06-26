#include "lists.h"

/**
 * list_len - function that returns the number of elements
 * in a linked list_t list
 * @h: linked list
 *
 * Return: the number of elements in a linked
 */
size_t list_len(const list_t *h)
{
	size_t cpt = 0;

	while (h != NULL)
	{
		h = h->next;
		cpt++;
	}
	return (cpt);
}
