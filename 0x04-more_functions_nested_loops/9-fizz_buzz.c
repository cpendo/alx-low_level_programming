#include <stdio.h>

/**
 * main - contains a fuction to print the numbers from 1 to 100
 * but test for multiples of  3, 5 and 15.
 *
 * Return: 0 if successful
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
			printf("FizzBuzz, ");
		else if (i % 3 == 0)
			printf("Fizz, ");
		else if (i % 5 == 0)
			printf("Buzz, ");
		else
			printf("%d ,", i);
	}

	printf("\n");

	return (0);
}
