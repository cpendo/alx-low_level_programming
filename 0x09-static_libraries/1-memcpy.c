#include "main.h"

/**
 * _memcpy - copies memory area
 *
 * @dest: pointer to destination
 * @src: pointer to source
 * @n: bytes to be copied from src
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
