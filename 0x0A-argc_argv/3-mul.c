#include "main.h"
#include <stdlib.h>

/**
 * main - multiplies two numbers
 *
 * @argc: argument count
 * @argv: array pointer to argument strings
 *
 * Return: int value or exit status
 */

int main(int argc, char *argv[])
{
	int i, res = 1;

	if (argc > 2)
	{
		for (i = 1; i < argc; i++)
		{
			res *= atoi(argv[i]);
		}
		printf("%d\n", res);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
