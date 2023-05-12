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

		while (cents > 0)
		{
			switch (cents)
			{
				case 25:
					cents -= 25;
					break;
				case 10:
					cents -= 10;
					break;
				case 5:
					cents -= 5;
					break;
				case 2:
					cents -= 2;
					break;
				case 1:
					cents -= 1;
					break;
			}
			coins++;
		}
	}
	printf("%d\n", coins);
	return (0);
}

