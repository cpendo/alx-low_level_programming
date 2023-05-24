#include "3-calc.h"

/**
 * main - test code
 *
 * @argc: number of arguments provide
 * @argv: array of arguments provided
 *
 * Return: 0 if successful
 */

int main(int argc, char *argv[])
{
	int a, b;
	char *op;

	if  (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	op = argv[2];
	b = atoi(argv[3]);

	if (get_op_func(op) == NULL || argv[2][1])
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", get_op_func(op)(a, b));

	return (0);
}
