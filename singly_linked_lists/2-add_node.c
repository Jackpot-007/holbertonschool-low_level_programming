#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * *add_node - a function that adds a
 * new node at the beginning of a list_t list.
 *
 * @head: used to allow modification of the
 * pointer to the first element from
 * within a function.
 *
 * @str: character pointer
 *
 * Return: new element or NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	char *dup;
	int len;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	dup = strdup(str);
	if (dup == NULL)
	{
		free(new);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	new->str = dup;
	new->len = len;
	new->next = *head;

	*head = new;

	return (new);
}
