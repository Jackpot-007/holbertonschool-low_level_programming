#include "main.h"
#include <string.h>

/**
 * *_strpbrk - function locates the first occurrence in the string
 * s of any of the bytes in the string accept.
 *
 * @s: character pointer
 *
 * @accept: character pointer
 *
 * Return: s, accept or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			if (*s == accept[i])
				return (s);
		}

		s++;
	}

	return ('\0');
}
