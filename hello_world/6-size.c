#include <stdio.h>

/**
 * main - Punto de entrada
 * Return: Siempre 0 (Exito)
 */

int main(void)
{
	printf("Tama√o de un char: %lu byte(s)\n", sizeof(char));
	printf("Tama√o de un int: %lu byte(s)\n", sizeof(int));
	printf("Tama√o de un long int: %lu byte(s)\n", 
	sizeof(long int));
	printf("Tama√o de un long long int: %lu byte(s)\n", 
	sizeof(long long int));
	printf("Tama√o de un float: %lu byte(s)\n", sizeof(float));
	return 0;
}
