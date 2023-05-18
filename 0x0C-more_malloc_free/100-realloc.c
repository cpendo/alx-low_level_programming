#include "main.h"
#include <stdio.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 *
 * @ptr: pointer to old memory block
 * @old_size: byte size of ptr
 * @new_size: byte size of new memory block
 *
 * Return: if it fails NULL, else ptr
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
		ptr = malloc(new_size);

	free(ptr);
	ptr = malloc(new_size);

	return (ptr);
}
