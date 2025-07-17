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
	int found;

	for (unsigned int i = 0; s[i] != '\0'; i++)
	{
		found = 0;
		for (unsigned int j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				found = 1;
				break;
			}
		}
		if (found)
		{
			count++;
		}
		else
		}
			break;
		}
	}
	return count;
}
