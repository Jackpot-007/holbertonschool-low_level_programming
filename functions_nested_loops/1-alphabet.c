#include "main.h"

/**
 * print_alphabet - Imprime el alfabeto en minúsculas
 * seguido de una nueva línea.
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
	_putchar(letter);
	letter++;
	}
	_putchar('\n');
}
