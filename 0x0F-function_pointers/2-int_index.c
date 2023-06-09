#include "function_pointers.h"

/**
 * int_index - searches for an integer
 *
 * @array: array to iterate
 * @size: number of elements in the array
 * @cmp: pointer to the function to compare values
 *
 * Return: -1 if size <= 0, or index of the first element
 * that does not return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}

	return (-1);
}
