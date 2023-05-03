#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords for the program 101-crackme
 *
 * Return: 0 if successful
 */

int main(void)
{
	char password[9];
	int i;

	srand(time(NULL));

	for (i = 0; i < 9;  i++)
		password[i] = rand() % 94 + 33;

	password[9] = '\0';

	printf("Password: %s\n", password);

	return (0);
}
