#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: The string to search in
 * @accept: The characters to match
 *
 * Return: The number of bytes in the initial segment of s
 *         consisting only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i, found;

	while (*s)
	{
	found = 0;
	for (i = 0; accept[i]; i++)
	{
	if (*s == accept[i])
	{
	found = 1;
	break;
	}
	}
	if (!found)
	break;
	count++;
	s++;
	}
	return (count);
}
