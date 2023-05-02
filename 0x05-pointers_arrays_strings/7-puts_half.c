#include "main.h"

/**
 * puts_half - print the second half of the string
 *
 * @str: string whose second half will  be printed
 *
 * Return: 0 if successful
 */

void puts_half(char *str)
{
	int len = 0, i = 0;
	char c;

	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
	{
		len = (len / 2);
	}
	else
	{
		len = (len / 2) - 1;
	}
	for (i = len; str[i] != '\0'; i++)
	{
		c = str[i];
		_putchar(c);
	}

	_putchar('\n');
}
