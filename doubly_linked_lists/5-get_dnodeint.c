#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node
 * of a dlistint_t linked list
 * @head: pointer to the head to the linked list
 * @index: node in linked list
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int cpt;

	for (cpt = 0; head != NULL && cpt < index; cpt++)
	{
		if (head == NULL)
		{
			return (NULL);
		}

		head = head->next;
	}
	return (head);
}
