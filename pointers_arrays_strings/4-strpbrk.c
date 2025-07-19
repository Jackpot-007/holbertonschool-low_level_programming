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
	while (*s)
	{
		char *temp_accept = accept;

		while (*temp_accept)
		{
			if (*s == *temp_accept)
			{
				return (s);
			}
			temp_accept++;
		}
		s++;
	}

	return (NULL);
}
