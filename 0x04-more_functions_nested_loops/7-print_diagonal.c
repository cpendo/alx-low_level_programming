#include "main.h"

/**
 * print_diagonal - draws a diagonal line in the terminal
 *
 * @n: integer that determines line length
 *
 * Return: 0 if successful
 */

void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}

	if (n <= 0)
	{
		_putchar('\n');
	}
}
