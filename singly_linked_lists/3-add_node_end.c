#include "lists.h"
#include <string.h>

/**
 * *add_node_end - a function that adds a new node
 * at the end of a list_t list.
 *
 * @head: used to allow modification of the
 * pointer to the first element from
 * within a function.
 *
 * @str: character pointer
 *
 * Return: new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *dup;
	int len;
	list_t *new, *last;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	dup = strdup(str);
	if (str == NULL)
	{
		free(new);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	new->str = dup;
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}

	return (*head);
}
