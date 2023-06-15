#include "lists.h"
/**
 * free_dlistint - function that frees a dlistint_t list
 * @head: pointer
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->prev);
		free(head);
		head = temp;
	}
}
