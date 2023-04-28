#include "lists.h"
#include <stdlib.h>
/**
 * free_list - function that frees a list_t list
 * @head: parameter
 */

void free_list(list_t *head)
{
	list_t *tempholder;

	while (head)
	{
		tempholder = head->next;
		free(head->str);
		free(head);
		head = tempholder;
	}
}
