#include "main.h"

/**
 * _puts - prints a string followed by a new line
 *
 * @str: string to be printed to stdout
 *
 * Return: 0 if successful
 */

void _puts(char *str)
{
	int len = 0;
	char c;

	while (str[len] != '\0')
	{
		c = str[len];
		_putchar(c);
		len++;
	}

	_putchar('\n');
}
