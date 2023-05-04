#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 *
 * @s: pointer to string to be changed
 *
 * Return: Uppercase string of s
 */

char *string_toupper(char *s)
{
	int len = 0, i;

	while (s[len] != '\0')
		len++;

	for (i = 0; i < len; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
	}

	return (s);
}
