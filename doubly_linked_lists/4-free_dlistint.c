#include "lists.h"

/**
 * free_dlistint - function that frees a dlistint_t list
 * @head: pointer to the head to the linked list
 *
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		if (tmp != NULL)
			tmp->prev = NULL;
		head = tmp;
	}
}
