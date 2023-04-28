#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node - adds node
 * @head: pointer
 * @str: input
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = new;

	return (*head);
}
