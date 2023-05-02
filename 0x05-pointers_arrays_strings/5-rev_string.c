#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: string to be reversed
 *
 * Return: reversed string
 */

void rev_string(char *s)
{
	int len = 0, i = 0;
	char temp;

	while (s[len] != '\0')
	{
		len++;
	}

	len = len - 1;

	while (i <= len)
	{
		temp = s[len];
		s[len] = s[i];
		s[i] = temp;
		len--;
		i++;
	}

	return (*s);
}
