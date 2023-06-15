#include "lists.h"
/**
 * delete_dnodeint_at_index - function that deletes the node at index index
 * of a dlistint_t linked list
 * @head: pointer
 * @index: the node that should be deleted,starts at 0
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *curr = *head;
	dlistint_t *prev = NULL;
	unsigned int j = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = curr->next;
		if (curr->next != NULL)
			curr->next->prev = NULL;
		free(curr);
		return (1);
	}

	while (curr != NULL && j < index)
	{
		prev = curr;
		curr = curr->next;
		j++;
	}

	if (curr == NULL)
		return (-1);

	prev->next = curr->next;

	if (curr->next != NULL)
		curr->next->prev = prev;

	free(curr);
	return (1);
}
