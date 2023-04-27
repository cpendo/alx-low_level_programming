#include "main.h"

/**
 * print_numbers - prints the numbers 0 to 9, followed by a new line
 *
 * Return: 0 if successful
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar('0' + i);
	}

	_putchar('\n');
}

