#include "main.h"

/**
 * _strncpy - copies a string
 *
 * @dest: pointer to buffer where copied string is stored
 * @src: pointer to string to be copied
 * @n: max number of bytes to be copied
 *
 * Return: Pointer to buffer
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
