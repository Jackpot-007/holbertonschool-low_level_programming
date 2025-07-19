#include "main.h"
#include <string.h>

/**
 * *_strstr - function finds the first occurrence of the substring
 * needle in the string haystack. The terminating null bytes ('\0')
 * are not compared.
 *
 * @haystack: character pointer
 *
 * @needle: character pointer
 *
 * Return: NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		i = 0;

		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);

				i++;

			} while (haystack[i] == needle[i]);
		}

		haystack++;
	}

	return ('\0');
}
