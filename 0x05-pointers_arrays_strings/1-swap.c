#include "main.h"

/**
 * swap_int - swaps the values of two integers
 *
 * @a: pointer to integer value
 * @b: pointer to integer value
 *
 * Return: 0 if successful
 */

void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
