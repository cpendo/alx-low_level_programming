#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 *
 * @n: integer to create table from
 *
 * Return: 0 if successful
 */

void print_times_table(int n)
{
	int i;
	int j;
	int result;

	if (n < 0 || n > 15)
		return;

	for (i = 0; i <= n; i++)
	{
		_putchar('0');
		for (j = 1; j <= n; j++)
		{
			result = i * j;
			if (result < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + result);
			}
			else if (result >= 10 && result < 100)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + result / 10);
				_putchar('0' + result % 10);
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + result / 100);
				_putchar('0' + (result % 100) / 10);
				_putchar('0' + result % 10);
			}
		}
		_putchar('\n');
	}
}
