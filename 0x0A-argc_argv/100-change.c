#include "main.h"
#include <stdlib.h>

/**
 * main - prints the minimum number of coins
 * to make change for an amount of money
 *
 * @argc: argument count
 * @argv: array pointer to argument strings
 *
 * Return: int value or exit status
 */

int main(int argc, char *argv[])
{
	int cents, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		cents = atoi(argv[1]);

		if (cents < 0)
		{
			printf("%d\n", 0);
			return (1);
		}

		while (cents > 0)
		{
			if (cents >= 25)
				cents -= 25;
			else if (cents >= 10)
				cents -= 10;
			else if (cents >= 5)
				cents -= 5;
			else if (cents >= 2)
				cents -= 2;
			else if (cents >= 1)
				cents -= 1;

			coins++;
		}
	}
	printf("%d\n", coins);
	return (0);
}
