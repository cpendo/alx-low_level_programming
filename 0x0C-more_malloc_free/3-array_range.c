#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 *
 * @min: minimum value
 * @max: maximum value
 *
 * Return: pointer to the newly created array, NULL
 */

int *array_range(int min, int max)
{
	int *array, i, n;

	if (min > max)
		return (NULL);

	n = max - min;

	array = malloc(sizeof(int) * (n + 1));

	if (array == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		array[i] = min;

	return (array);
}
