#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a
 * parameter on each element of an array
 *
 * @array: array to iterate
 * @size: size of the array
 * @action: pointer to the function you need to use
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && size)
	{
		while (size-- > 0)
		{
			action(*array);
			array++;
		}
	}
}
