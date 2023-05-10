#include "main.h"

/**
 * _divisible - checks if a number is divisible
 *
 * @n: number to be checked
 * @div: divisor
 *
 * Return: 0 if divisible, otherwise 1
 */

int _divisible(int n, int div)
{
	if (n % div == 0)
		return (0);

	if (div == n / 2)
		return (1);

	return (_divisible(n, div + 1));
}

/**
 * is_prime_number - checks if a number is prime
 *
 * @n: number to be checked
 *
 * Return: 1 if prime number, else 0
 */
int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);

	if (n >= 2 && n <= 3)
		return (1);

	return (_divisible(n, div));
}
