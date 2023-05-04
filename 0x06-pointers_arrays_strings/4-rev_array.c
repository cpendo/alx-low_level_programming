#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 *
 * @a: pointer to array to reverse
 * @n: number of elements of the array
 *
 * Return: 0 if successful
 */

void reverse_array(int *a, int n)
{
	int i = 0, temp;

	while (i < n)
	{
		n--;
		temp = a[n];
		a[n] = a[i];
		a[i] = temp;
		i++;
	}
}
