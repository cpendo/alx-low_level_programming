#include "main.h"

/**
 * print_sign - prints the sign of a number
 *
 * @n: number whose sign to check for
 *
 * Return: 1 if n is more than 0, 0 if 0 and -1 if less than 0
 */

int print_sign(int n)
{
	if (n > 0)
		_putchar('+');
		return (1);
	else if (n == 0)
		_putchar('0');
		return (0);
	else if (n < 0)
		_putchar('-');
		return (-1);
}
