#include "main.h"

/**
 * _isdigit - check a digit from (0 to 9)
 *
 * @c: verifier character
 *
 * Return: 1, c and 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);

	else
		return (0);
}
