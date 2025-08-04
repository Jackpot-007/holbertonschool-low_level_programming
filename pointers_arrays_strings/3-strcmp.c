#include "main.h"

/**
 * _strcmp - a function that compares two strings.
 *
 * @s1: character pointer.
 *
 * @s2: character pointer.
 *
 * Return: 0
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
