#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - this prints the last digit of a number.
 *
 * @n: the number to extract last digit from
 *
 * Return: value of the last digit
 */

int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
		last_digit *= -1;

	_putchar(last_digit + '0');

	return (last_digit);
}
