#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 * which contains a copy of the given string.
 * @str: The string to duplicate.
 *
 * Return: Pointer to the duplicated string, or NULL if insufficient
 * memory was available or if str is NULL.
 */
char *_strdup(char *str)
{
	char *dup;
	int i, len = 0;

	if (str == NULL)
	return (NULL);

	/* Calculate the length of the string */
	while (str[len] != '\0')
	len++;

	/* Allocate memory for the new string (+1 for null terminator) */
	dup = malloc(sizeof(char) * (len + 1));

	if (dup == NULL) /* Check if memory allocation failed */
	return (NULL);

	/* Copy the string into the newly allocated space */
	for (i = 0; i < len; i++)
	dup[i] = str[i];

	dup[len] = '\0'; /* Add null terminator */

	return (dup);
}
