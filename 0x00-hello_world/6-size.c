#include <stdio.h>

/**
 * main - prints the output to display.
 *
 * This C program will print size the various data types in the computer
 * using the sizeof function.
 *
 * @return 0 - if the program is successful,non-zero otherwise.
 */
int main(void)
{
	printf("Size of a char: %d byte(s)\n", (int) sizeof(char));
	printf("Size of an int: %d byte(s)\n", (int) sizeof(int));
	printf("Size of a long int: %d byte(s)\n", (int) sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n", (int) sizeof(long long int));
	printf("Size of a float: %d byte(s)\n", (int) sizeof(float));
	return (0);
}
