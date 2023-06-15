#include "lists.h"
/**
 * sum_dlistint -  function that returns the sum of all the data
 * (n) of a dlistint_t linked list
 * @head: pointer
 * Return: if the list is empty, return 0
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *j;

	for (j = head; j != NULL; j = j->next)
	{
		sum += j->n;
	}
	return (sum);
}
