#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s: The string to search in
 * @accept: The bytes to search for in s
 *
 * Return: A pointer to the byte in s that matches one of the bytes
 *         in accept, or NULL if no byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
	char *a = accept;

	while (*a)
	{
	if (*s == *a)
	return (s);
	a++;
	}
	s++;
	}
	return (NULL);
}
