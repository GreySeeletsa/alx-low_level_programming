#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer
 * @idx:  index of the list where new node should be added,starts at 0
 * @n: element
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *a_node;
	dlistint_t *temp = *h;
	unsigned int i = 0;

	a_node = malloc(sizeof(dlistint_t));
	if (a_node == NULL)
		return (NULL);
	a_node->n = n;
	if (idx == 0)
	{
		a_node->next = temp;
		a_node->prev = NULL;
		if (temp != NULL)
			temp->prev = a_node;
		*h = a_node;
		return (a_node);
	}
	while (temp != NULL && i < idx - 1)
	{
		temp = temp->next;
		i++;
	}
	if (temp == NULL)
		return (NULL);
	a_node->next = temp->next;
	a_node->prev = temp;
	if (temp->next != NULL)
		temp->next->prev = a_node;
	temp->next = a_node;
	return (a_node);
}
