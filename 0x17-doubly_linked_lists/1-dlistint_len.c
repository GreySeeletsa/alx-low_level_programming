#include "lists.h"
/**
 * dlistint_len - function that returns number of elements in linked list
 * @h: pointer
 * Return: the number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
}
