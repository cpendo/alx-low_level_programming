#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms
 *
 * Return: 0 if successful
 */

int main(void)
{
	int fib1 = 1, fib2 = 2, sum = 0, temp;

	while (fib1 <= 4000000)
	{
		if (fib1 % 2 == 0)
		{
			sum += fib1;
		}

		temp = fib1;
		fib1 += fib2;
		fib2 = temp;
	}

	printf("%d\n", sum);

	return (0);
}
