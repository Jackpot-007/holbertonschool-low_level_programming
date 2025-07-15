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
	for (; *s != '\0'; s++)
	{
		if (*s == (char)c)
		{
		return s;
		}
	}

	if (*s == (char)c)
	{
		return s;
	}
		return NULL;
}
