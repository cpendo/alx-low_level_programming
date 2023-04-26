#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: 0 if successful
 */

int main(void)
{
	int n = 10;
	int fib1 = 1, fib2 = 2, next;

	printf("%d, %d, ", fib1, fib2);

	for (int i = 3; i <= n; i++)
	{
		next = fib1 + fib2;

		printf("%d, ", next);
		fib1 = fib2;
		fib2 = next;
	}

	return (0);
}
