#include "main.h"
#include <stdio.h>

/**
 * print_number - this prints all natural numbers
 *
 * @n: value added to the character n
 */

void print_number(int n)
{
	unsigned int num:;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}
	else
	{
		num = n;
	}

	if (num / 10)
		print_number(num / 10);
	_putchar((num % 10) + '0');
}

/**
 * print_to_98 - prints all natural numbers from n to 98
 *
 * @n: starting integer
 */

void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			print_number(i);
			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			print_number(i);
			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	_putchar('\n');
}
