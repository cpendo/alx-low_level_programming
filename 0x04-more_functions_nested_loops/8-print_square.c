#include "main.h"

/**
 * print_square - prints a square, followed by a new line
 *
 * @size: size of the square
 *
 * Return: 0 if successful;
 */

void print_square(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}

	if (n <= 0)
	{
		_putchar('\n');
	}
}
