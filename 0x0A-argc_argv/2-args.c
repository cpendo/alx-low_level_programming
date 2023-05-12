#include "main.h"

/**
 * main - prints all arguments it receives
 *
 * @argc: argument count
 * @argv: array pointer to argument strings
 *
 * Return: int value or exit status
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
