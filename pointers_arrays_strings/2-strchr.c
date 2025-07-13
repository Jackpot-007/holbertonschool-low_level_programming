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
	for(int i = 0; s[i]; i++)
	{
		if (s[i] == c)
			return s + i;
		if (s[i] == '\0')
			break;
	}
	return NULL;
}
