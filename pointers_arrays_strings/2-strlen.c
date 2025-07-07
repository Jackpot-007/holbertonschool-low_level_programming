#include "main.h"

/**
 * _strlen - this returns the length of a string
 *
 * @s: pointer character
 *
 * Return: length of the string
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
