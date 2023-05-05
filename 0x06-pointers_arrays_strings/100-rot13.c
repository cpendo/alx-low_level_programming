#include "main.h"

/**
 * rot13 - encodes a string using rot13
 *
 * @s: string to be encoded
 *
 * Return: pointer to encoded string
 */

char *rot13(char *s)
{
	int len = 0, i;

	while (s[len] != '\0')
	{
		if ((s[len] >= 'A' && s[len] <= 'M') || (s[len] >= 'a' && s[len] <= 'm'))
			s[len] += 13;
		else if ((s[len] >= 'N' && s[len] <= 'Z') || (s[len] >= 'n' && s[len] <= 'z))
			s[len] -= 13;
		len++;
	}

	return (s);
}
