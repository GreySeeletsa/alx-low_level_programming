#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint_end - adds a new node at the end of doubly linked list
 * @head: pointer
 * @n: value
 * Return: address of new element or NULL if it fails
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *a_node;
    dlistint_t *temp = *head;

    if (head == NULL)
        return (NULL);

    a_node = malloc(sizeof(dlistint_t));
    if (a_node == NULL)
        return (NULL);

    a_node->n = n;
    a_node->next = NULL;

    if (*head == NULL) {
        a_node->prev = NULL;
        *head = a_node;
        return (a_node);
    }

    while (temp->next != NULL)
        temp = temp->next;

    temp->next = a_node;
    a_node->prev = temp;

    return (a_node);
}
