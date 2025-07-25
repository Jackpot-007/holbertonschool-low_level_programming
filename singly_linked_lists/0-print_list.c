#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_list - a function that prints
 * all the elements of a list_t list.
 *
 * @h: character pointer
 *
 * Return: the number of nodes in h
 */

size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		nodes++;
		h = h->next;
	}

	return (nodes);
}
