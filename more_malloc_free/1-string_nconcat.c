#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strlen - Calculates the length of a string.
 * @str: The input string.
 *
 * Return: The length of the string.
 */
unsigned int _strlen(char *str)
{
	unsigned int len = 0;
	while (str[len] != '\0')
	len++;

	return (len);
}

/**
 * string_nconcat - Concatenates two strings, using at most
 * n bytes from the second string.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes to take from s2.
 *
 * Return: Pointer to the newly allocated memory containing s1
 * followed by the first n bytes of s2, null-terminated.
 * If the function fails, returns NULL.
 * If NULL is passed for s1 or s2, treat it as an empty string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_str;
	unsigned int len_s1, len_s2, i, j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	len_s1 = _strlen(s1);
	len_s2 = _strlen(s2);

	if (n > len_s2)
		n = len_s2;

	new_str = malloc(len_s1 + n + 1);
	if (new_str == NULL)
	return (NULL);

	for (i = 0; i < len_s1; i++)
	new_str[i] = s1[i];

	for (j = 0; j < n; j++)
	new_str[i + j] = s2[j];

	new_str[i + j] = '\0';

	return (new_str);
}
