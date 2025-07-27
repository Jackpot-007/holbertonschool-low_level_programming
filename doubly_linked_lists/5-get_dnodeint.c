#include "lists.h"

/**
 * get_dnodeint_at_index - a function that
 * returns the nth node of a dlistint_t linked list.
 *
 * @head: character pointer
 *
 * @index: is the index of the node, starting from 0
 *
 * Return: if the node does not exist, return NULL and
 * otherwise the address of the located node.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}
