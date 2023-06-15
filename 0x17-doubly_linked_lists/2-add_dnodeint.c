#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint - adds a new node at the beginning of a doubly linked list
 * @head: pointer
 * @n: value
 * Return: address of new element or NULL if it fails
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *a_node;
	
	if (head == NULL)
		return (NULL);
	
	a_node = malloc(sizeof(dlistint_t));
	if (a_node == NULL)
		return (NULL);
	
	a_node->n = n;
	a_node->prev = NULL;
	a_node->next = *head;
	
	if (*head != NULL)
		(*head)->prev = a_node;
	
	*head = a_node;
	
	return (a_node);
}
