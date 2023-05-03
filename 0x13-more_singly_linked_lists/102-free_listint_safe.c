#include "lists.h"
/**
 * free_listint_safe -  function that frees a listint_t list
 * @h: pointer
 * Return: the size of the list that was free’d
 */

size_t free_listint_safe(listint_t **h)
{
	size_t length = 0;
	int b;
	listint_t *tmp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		b = *h - (*h)->next;
		if (b > 0)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
			length++;
		}
		else
		{
			free(*h);
			*h = NULL;
			length++;
			break;
		}
	}
	*h = NULL;

	return (length);
}
