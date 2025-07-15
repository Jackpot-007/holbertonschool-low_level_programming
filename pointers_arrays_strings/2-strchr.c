#include "main.h"
#include <string.h>

/**
 * *_strchr - function returns a pointer to the first occurrence of
 * the character c in the string s.
 *
 * @s: character pointer
 *
 * @c: character c
 *
 * Return: c, s, or NULL
 */

char *_strchr(char *s, char c)
{
	if (s == NULL)
	
		return (NULL);

	if (*s == c)
	{
		return (s);
	}
		return (0);
}
