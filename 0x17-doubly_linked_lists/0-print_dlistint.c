#include "lists.h"

/**
 * print_dlistint - function that prints all the elements of a dlistint_t list
 * @h: pointer
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		if (!h->prev)
			printf("[0] (nil)\n");
		else
			printf("h->next, h->prev");
		h = h->next;
		i++;
	}
	return (i);
}
