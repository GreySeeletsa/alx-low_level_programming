#include "lists.h"
/**
 * get_nodeint_at_index - function that returns the nth node of
 * a listint_t linked list
 * @head: pointer
 * @index: the index of the node, starting at 0
 * Return: if the node does not exist, return NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a = 0;
	listint_t *tmp = head;

	while (tmp && a < index)
	{
		tmp = tmp->next;
		a++;
	}

	return (tmp ? tmp : NULL);
}
