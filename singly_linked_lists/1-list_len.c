#include "lists.h"

/**
 * list_len - a function that returns
 * the number of elements in a linked list_t list.
 *
 * @h: character pointer
 *
 * Return: the number of elements in h.
 */

size_t list_len(const list_t *h)
{
	size_t element = 0;

	while (h)
	{
		element++;
		h = h->next;
	}

	return (element);
}
