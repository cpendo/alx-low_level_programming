#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers, starting with 1 and 2
 *
 * Return: 0 if successful
 */

int main(void)
{
	int i;
	unsigned long fib1 = 1, fib2 = 2, next;

	printf("%lu, %lu ", fib1, fib2);

	for (i = 3; i <= 98; i++)
	{
		next = fib1 + fib2;

		if (i != 98)
		{
			printf("%lu, ", next);
			fib1 = fib2;
			fib2 = next;
		}
		else
			printf("%lu\n", next);
	}

	return (0);
}
