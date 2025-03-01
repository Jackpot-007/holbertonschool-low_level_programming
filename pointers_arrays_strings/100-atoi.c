#include "main.h"

/*
 * _atoi - Converts a string to an integer.
 * @s: The string to be converted.
 *
 * Description:
 * This function takes a string as input and converts the first
 * sequence of digits it encounters into an integer. It handles
 * optional leading '+' or '-' signs, as well as ignoring
 * non-numeric characters before the digits. If no numeric
 * characters are found, the function returns 0.
 *
 * Return: The converted integer, which could be negative if
 *         a '-' sign was encountered before the digits.
 */
int _atoi(char *s)
{
	int result = 0;   /* Variable to store the result of the conversion */
	int sign = 1;     /* Default sign is positive */
	int i = 0;        /* Index to iterate over the string */

	/* Skip leading non-numeric characters */
	while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
	{
	if (s[i] == '-')
	sign *= -1;  /* Flip the sign if a '-' is encountered */
	i++;
	}

	/* Convert the digits to an integer */
	while (s[i] != '\0' && s[i] >= '0' && s[i] <= '9')
	{
	result = result * 10 + (s[i] - '0');  /* Build the integer from the digits */
	i++;
	}

	return (result * sign);  /* Return the final result with the correct sign */
}
