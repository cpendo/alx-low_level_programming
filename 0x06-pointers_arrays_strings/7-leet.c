#include "main.h"

/**
 * leet - encodes a string into 1337
 *
 * @s: string to be encoded
 *
 * Return: Pointer to encoded string
 */

char *leet(char *s)
{
	int len = 0, i;
	int lower[] = {97, 101, 111, 116, 108};
	int upper[] = {65, 69, 79, 84, 76};
	int numbers[] = {52, 51, 48, 55, 49};

	while (s[len] != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (s[len] == lower[i] || s[len] == upper[i])
			{
				s[len] = numbers[i];
				break;
			}
		}

		len++;
	}

	return (s);
}
