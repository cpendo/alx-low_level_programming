#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc
 *
 * @nmemb: array to be used
 * @size: byte size of each element in array
 *
 * Return: pointer to the allocated memory, or NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(size * nmemb);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < (size * nmemb); i++)
		p[i] = '\0';

	return (p);
}
