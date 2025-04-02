#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - Print all elements of a list_t list.
 * @h: Pointer to the beginning of the list.
 *
 * Return: Total number of nodes in the list.
 */
size_t print_list(const list_t *h)
{
	size_t contador = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;
		contador++;
	}

	return (contador);
}
