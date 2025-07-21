#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * *_strdup - function returns a pointer to a new string which is a duplicate of the string str.
 *
 * @str: character pointer
 *
 * Return: NULL if str = NULL
 */

char *_strdup(char *str)
{
	char *duplicate;
	int i;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		mblen;

	duplicate = malloc(sizeof(char) * (mblen + 1));

	if (duplicate == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		duplicate[i] = str[i];

	duplicate[mblen] = '\0';

	return (duplicate);
}
