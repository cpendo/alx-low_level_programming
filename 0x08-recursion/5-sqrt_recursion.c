#include "main.h"

/**
 * _sqrt - finds the natural square root of n
 *
 * @n: number to find square root of
 * @num: num to be tested
 *
 * Return: square root of n
 */

int _sqrt(int n, int num)
{
	if (num * num == n)
		return (num);
	else if (num * num > n)
		return (-1);

	return (_sqrt(n, num + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: number to be squared
 *
 * Return: natural square root of a number
 */

int _sqrt_recursion(int n)
{
	int num = 0;

	if (n < 0)
		return (-1);
	else if (n == 1)
		return (1);

	return (_sqrt(n, num));
}
