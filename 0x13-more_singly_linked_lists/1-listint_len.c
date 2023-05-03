#include "lists.h"
/**
 * listint_len - function that returns the number of
 * elements in a linked listint_t list
 * @h: element
 * Return: num of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t num_nodes;

	num_nodes = 0;

	while (h)
	{
		num_nodes++;
		h = h->next;
	}
	return (num_nodes);
}
