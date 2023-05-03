#include "lists.h"
/**
 * print_listint - function that prints all the elements of a listint_t list
 * @h: element
 * Return: num of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t num_nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num_nodes++;
		h = h->next;
	}
	return (num_nodes);
}