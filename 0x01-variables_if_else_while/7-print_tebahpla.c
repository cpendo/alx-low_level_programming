#include <stdio.h>

/**
 * main - print the lowercase alphabet in reverse
 *
 * Return: if successful 0
 */
int main(void)
{
	int i;

	for (i = 25; i >= 0; i--)
	{
		putchar('a' + i);
	}

	putchar('\n');

	return (0);
}
