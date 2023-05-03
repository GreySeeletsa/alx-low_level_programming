#include "lists.h"
/**
 * delete_nodeint_at_index - function that deletes the node
 * at index of linked list
 * @head: pointer
 * @index: the index of the node that should be deleted.
 * Index starts at 0
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = *head;
	listint_t *a = NULL;
	unsigned int b = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}
	while (b < index - 1)
	{
		if (!tmp || !(tmp->next))
			return (-1);
		tmp = tmp->next;
		b++;
	}

	a = tmp->next;
	tmp->next = a->next;
	free(a);
	return (1);
}

