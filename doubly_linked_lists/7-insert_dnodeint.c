#include "lists.h"

/**
 * insert_dnodeint_at_index -  function that inserts a new node at a
 * given position
 * @h: pointer to the head to the linked list
 * @idx: position of the new node
 * @n: integer for the new node
 *
 * Returns: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *tmp = *h;
	unsigned int cpt = 0;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	if (idx == 0)
	{
		new->next = *h;
		if (*h != NULL)
			(*h)->prev = new;
		*h = new;
	}
	else
	{
		while (tmp != NULL && cpt < idx - 1)
		{
			tmp = tmp->next;
			cpt++;
		}

		if (tmp != NULL)
		{
			new->next = tmp->next;
			new->prev = tmp;
			if (tmp->next != NULL)
				tmp->next->prev = new;
			tmp->next = new;
		}
		else
		{
			free(new);
			return (NULL);
		}
	}
		return (new);
}
