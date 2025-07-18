#include "main.h"
#include <string.h>

/**
 * _strspn - function calculates the length (in bytes) of the
 * initial segment of s which consists entirely of bytes in accept.
 *
 * @s: character pointer
 *
 * @accept: character pointer
 *
 * Return: accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	unsigned int j;
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
			j++;
		}
		if (accept[j] == '\0')
		{
			break;
		}
	}

	return (count);
}
