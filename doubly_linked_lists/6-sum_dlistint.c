#include "lists.h"

/**
 * sum_dlistint - function that returns the sum of all the data (n)
 * of a dlistint_t linked list
 * @head: pointer to the head to the linked list
 *
 * Return: sum or 0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		if (head == NULL)
		{
			return (0);
		}
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
