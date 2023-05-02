#include "main.h"

/**
 * puts2 - prints every other character of a string,
 * starting with the first character
 *
 * @str: string to be printed
 *
 * Return: 0 if successful
 */

void puts2(char *str)
{
	int len = 0;
	char c;

	while (str[len] != '\0')
	{
		c = str[len];
		_putchar(c);
		len+=2;
	}

	_putchar('\n');
}
