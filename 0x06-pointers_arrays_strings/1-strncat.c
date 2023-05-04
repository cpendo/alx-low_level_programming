#include "main.h"

/**
 * _strncat - concatenates two strings using n bytes from src
 *
 * @dest: pointer to string to be concat
 * @src: pointer to string to be appended
 * @n: number of bytes from src to use
 *
 * Return: pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int len = 0, i;

	while (dest[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < n && src[i] != 0; i++)
		dest[len + i] = src[i];

	dest[len + i] = '\0';

	return (dest);
}
