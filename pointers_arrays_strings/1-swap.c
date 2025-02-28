#include "main.h"

/**
 * swap_int - Intercambia los valores de dos enteros.
 * @a: Puntero al primer entero.
 * @b: Puntero al segundo entero.
 */
void swap_int(int *a, int *b)
{
	int temp;  /* Variable auxiliar para el intercambio */

	temp = *a;
	*a = *b;
	*b = temp;
}
