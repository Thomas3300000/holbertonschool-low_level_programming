#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning of a list_t list
 * @head: pointer to the head to the linked list
 * @str: string to be added
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int cpt;

	if (str == NULL)
	{
		return (NULL);
	}


	new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}

	for (cpt = 0; str[cpt] != '\0'; cpt++)
	{
	}

	new->len = cpt;
	new->next = *head;
	*head = new;

	return (new);
}
