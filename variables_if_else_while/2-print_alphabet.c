#include <stdio.h>

/**
 * Declare una variable e inicialícela con el primer miembro de
 * el rango [a - z]
 *
 * Verifique si el valor actual de su variable es menor que
 * o igual que el último miembro(z) del rango dado. Mientra el valor
 * sea menor, continúe e imprima el vaor
 */

int main(void)
{
	char alfabeto = 'a';

	while (alfabeto <= 'z')
	{

	putchar(alfabeto);

	alfabeto++;
	}

	putchar('\n');
	return (0);
}
