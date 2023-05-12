#include "main.h"

/**
 * _islower - checks for lowercase characters
 *
 * @c: character to checj=k for lowercase
 *
 * Return: 1 if character is successful
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
