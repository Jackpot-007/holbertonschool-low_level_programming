#include "main.h"

/**
 * print_fizz_buzz - Prints numbers from 1 to 100 with FizzBuzz rules.
 */
void print_fizz_buzz(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
	if (i % 3 == 0 && i % 5 == 0)
	_putchar('F'), _putchar('i'), _putchar('z'), _putchar('z'),
	_putchar('B'), _putchar('u'), _putchar('z'), _putchar('z');
	else if (i % 3 == 0)
	_putchar('F'), _putchar('i'), _putchar('z'), _putchar('z');
	else if (i % 5 == 0)
	_putchar('B'), _putchar('u'), _putchar('z'), _putchar('z');
	else
	{
	if (i >= 10)
	_putchar(i / 10 + '0');  /* Print tens place */
	_putchar(i % 10 + '0');  /* Print ones place */
	}

	if (i != 100)
	_putchar(' ');  /* Print space between numbers */
	}
	_putchar('\n');  /* Print newline at the end */
}
