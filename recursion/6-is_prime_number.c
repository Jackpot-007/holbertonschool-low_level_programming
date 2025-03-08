#include "main.h"

/**
 * check_prime - Recursively checks if n is divisible
 * by any number from 2 to sqrt(n).
 * @n: The number to check.
 * @div: The current divisor to test.
 *
 * Return: 1 if prime, 0 otherwise.
 */
int check_prime(int n, int div)
{
	if (div * div > n) /* If div exceeds sqrt(n), it's prime */
	return (1);
	if (n % div == 0) /* If n is divisible by div, it's not prime */
	return (0);
	return (check_prime(n, div + 1)); /* Recursively check next divisor */
}

/**
 * is_prime_number - Checks if a number is a prime number.
 * @n: The number to check.
 *
 * Return: 1 if prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n <= 1) /* 0 and 1 are not prime, negative numbers aren't prime */
	return (0);
	return (check_prime(n, 2)); /* Start checking divisibility from 2 */
}
