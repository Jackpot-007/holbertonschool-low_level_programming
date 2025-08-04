#include "main.h"

/**
 * _strncat - a function that concatenates two strings.
 *
 * @dest: character pointer.
 *
 * @src: character pointer.
 *
 * @n: integer pointer.
 *
 * Return: a pointer to the resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, dest_len = 0;

	while (dest[i++])
		dest_len++;

	for (i = 0; src[i] && i < n; i++)
		dest[dest_len++] = src[i];

	return (dest);
}
