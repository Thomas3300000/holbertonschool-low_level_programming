#include "lists.h"

/**
 * delete_dnodeint_at_index - function that deletes the node at index
 * of a dlistint_t linked list
 * @head: pointer to the head to the linked list
 * @index: node to delete
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head, *delete;
	unsigned int cpt;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		return (1);
	}

	for (cpt = 0; tmp != NULL && cpt < index - 1; cpt++)
	{
		tmp = tmp->next;
	}
	if (tmp == NULL || tmp->next == NULL)
		return (-1);

	delete = tmp->next;
	tmp->next = delete->next;
	if (delete->next != NULL)
		delete->next->prev = tmp;
	return (1);
}
