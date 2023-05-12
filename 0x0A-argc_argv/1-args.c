#include "main.h"

/**
 * main - prints the number of arguments passed into it
 *
 * @argc: argument count
 * @argv: array pointer to argument strings
 *
 * Return: int value or exit status
 */

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", --argc);
	return (0);
}
