#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers, starting with 1 and 2
 *
 * Return: 0 if successful
 */

int main(void)
{
	int n = 50, i;
	long int fib1 = 1, fib2 = 2, next;

	printf("%ld, %ld, ", fib1, fib2);

	for (i = 3; i <= n; i++)
	{
		next = fib1 + fib2;

		if (i != 50)
		{
			printf("%ld, ", next);
			fib1 = fib2;
			fib2 = next;
		}
		else
			printf("%ld\n", next);
	}

	return (0);
}
