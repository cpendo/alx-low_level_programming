#include <stdio.h>

/**
 * main - print lowercase alphabet and omit e and g
 *
 * Return: if successful 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 26; i++)
	{
		if (i != 4 && i != 16)
			putchar('a' + i);
	}
	putchar('\n');
	return (0);
}
