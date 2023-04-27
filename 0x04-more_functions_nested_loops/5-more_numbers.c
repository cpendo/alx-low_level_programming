#include "main.h"

/**
 * more_numbers - prints numbers 0 to 14, followed by a new line 10 times
 *
 * Return: 0 if successful
 */

void more_numbers(void)
{
	int i, j;

	i = 0;

	while (i < 10)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
			{
				_putchar('0' + j / 10);
			}
			_putchar('0' + j % 10);
		}

		_putchar('\n');

		i++;
	}
}
