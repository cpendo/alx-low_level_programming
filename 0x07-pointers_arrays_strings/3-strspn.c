#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: pointer to string
 * @accept: pointer to accepted substring
 *
 * Return: number of bytes in accept and s
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	unsigned int count = 0;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				count++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (count);
		}

		s++;
	}

	return (count);
}
