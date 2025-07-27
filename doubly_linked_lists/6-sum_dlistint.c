#include "lists.h"

/**
 * sum_dlistint - a function that returns
 * the sum of all the data (n) of a dlistint_t linked list.
 *
 * @head: character pointer
 *
 * Return: 0
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
