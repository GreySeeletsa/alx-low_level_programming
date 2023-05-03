#include "lists.h"
/**
 * pop_listint - function that deletes the head node of a listint_t linked
 * @head: element
 * Return: the head node’s data (n) otherwise 0 if the linked list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int number;

	if (!head || !*head)
		return (0);

	number = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;

	return (number);
}
