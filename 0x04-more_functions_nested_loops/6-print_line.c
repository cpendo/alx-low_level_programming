#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 *
 * @n: integer that determines line length
 *
 * Return: 0 if successful
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}

	_putchar('\n');
}
