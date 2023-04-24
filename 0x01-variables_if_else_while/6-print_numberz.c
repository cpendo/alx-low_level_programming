#include <stdio.h>

/**
 * main - print numbers 0 to 10 using putchar
 *
 * Return: if successful 0
 */
int main(void)
{
	int i;

	for (i =  0; i < 10; i++)
	{
		putchar(48 + i);
	}
	putchar('\n');

	return (0);
}
