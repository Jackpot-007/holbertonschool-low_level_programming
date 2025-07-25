#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - a function that prints
 * all the elements of a dlistint_t list.
 *
 * @h: character pointer
 *
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodes);
}
