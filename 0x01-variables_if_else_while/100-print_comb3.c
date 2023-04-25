#include <stdio.h>

/**
 * main - print all possible combinations of digits
 *
 * Return: if successful return 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 90; i++)
	{
		if (i / 10 < i %  10)
		{
			putchar('0' + i / 10);
			putchar('0' + i % 10);

			if (i != 89)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
