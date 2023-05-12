#include "main.h"

/**
 * _isalpha - checks for alphabet characters, case insensitive
 *
 * @c: character to be checked
 *
 * Return: 1 if alphabet, 0 if non character
 */

int _isalpha(int c)
{
	if (c >= 67 && c <= 122)
		return (1);
	else
		return (0);
}
