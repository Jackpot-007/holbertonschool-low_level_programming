#include "main.h"

/**
 * _isupper - check uppercase characters
 *
 * @c: verified character
 *
 * Return: 1, c and 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
