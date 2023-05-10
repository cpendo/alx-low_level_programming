#include "main.h"

/**
 * factorial - returns the factorial of a given number
 *
 * @n: pointer to number
 *
 * Return: factorial of n
 */

int factorial(int n)
{
	int result = 1;

	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);

	result = n * factorial(n - 1);

	return (result);
}
