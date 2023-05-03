#include "lists.h"
/**
 * insert_nodeint_at_index - function that inserts a
 * new node at a given position
 * @head: pointer
 * @idx:  the index of the list where the new node should be added.
 * Index starts at 0
 * @n: input
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int a;
	listint_t *add;
	listint_t *tmp = *head;

	add = malloc(sizeof(listint_t));
	if (!add || !head)
		return (NULL);

	add->n = n;
	add->next = NULL;

	if (idx == 0)
	{
		add->next = *head;
		*head = add;
		return (add);
	}

	for (a = 0; tmp && a < idx; a++)
	{
		if (a == idx - 1)
		{
			add->next = tmp->next;
			tmp->next = add;
			return (add);
		}
		else
			tmp = tmp->next;
	}
	return (NULL);
}
