#include "main.h"

/**
 * times_table - Prints the 9 times table, starting from 0.
 */
void times_table(void)
{
	int row, col, result;

	for (row = 0; row < 10; row++) /* Loop for rows */
	{
	for (col = 0; col < 10; col++) /* Loop for columns */
	{
	result = row * col; /* Multiply row and column */

	if (col != 0) /* Add formatting spaces */
	{
	_putchar(',');
	_putchar(' ');

	if (result < 10) /* For single-digit numbers */
	_putchar(' ');
	}

	if (result < 10) /* Print single-digit numbers */
	_putchar(result + '0');
	else /* Print two-digit numbers */
	{
	_putchar((result / 10) + '0');
	_putchar((result % 10) + '0');
	}
	}
	_putchar('\n'); /* New line after each row */
	}
}
