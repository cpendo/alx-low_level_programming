#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars and
 * initializes it with a specific char
 *
 * @size: number to bytes to allocate
 * @c: character to initialize
 *
 * Return: pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *array;

	array = malloc(sizeof(char) * size);

	if (size == 0 || array == 0)
		return (NULL);

	while (size--)
		array[size] = c;

	return (array);
}
