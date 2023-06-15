#include "lists.h"
/**
 * get_dnodeint_at_index - function that returns the nth node
 * of doubly linked list
 * @head: pointer
 * @index: index of the node, starting from 0
 * Return: if the node does not exist, return NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int j = 0;
	dlistint_t *temp = head;

	while (temp != NULL && j < index)
	{
		temp = temp->next;
		j++;
	}

	if (j == index)
		return (temp);
	return (NULL);
}
