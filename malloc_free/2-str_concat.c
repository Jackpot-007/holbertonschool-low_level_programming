#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: A pointer to the newly allocated space in memory
 * containing s1, followed by s2, and null-terminated.
 * Returns NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	char *new_str;
	int i, j, len1 = 0, len2 = 0;

	/* If s1 is NULL, treat it as an empty string */
	if (s1 != NULL)
	{
	while (s1[len1])
	len1++;
	}

	/* If s2 is NULL, treat it as an empty string */
	if (s2 != NULL)
	{
	while (s2[len2])
	len2++;
	}

	/* Allocate memory for the new string (+1 for the null terminator) */
	new_str = malloc(sizeof(char) * (len1 + len2 + 1));
	if (new_str == NULL)
	return (NULL);

	/* Copy characters from s1 to new_str */
	for (i = 0; i < len1; i++)
	new_str[i] = s1[i];

	/* Copy characters from s2 to new_str, after s1 */
	for (j = 0; j < len2; j++)
	new_str[i + j] = s2[j];

	/* Add null terminator at the end */
	new_str[i + j] = '\0';

	return (new_str);
}
