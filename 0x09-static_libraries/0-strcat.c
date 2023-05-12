#include "main.h"

/**
 * _strcat - concatenates two strings
 *
 * @dest: pointer to string to be concat
 * @src: pointer to string to append
 *
 * Return: pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int len = 0, n = 0, i;

	while (dest[len] != '\0')
	{
		len++;
	}

	while (src[n] != '\0')
	{
		n++;
	}

	for (i = 0; i < n; i++)
		dest[len + i] = src[i];

	dest[len + i] = '\0';

	return (dest);
}
