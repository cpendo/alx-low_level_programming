#include "main.h"

/**
 * _strcmp - compares two strings
 *
 * @s1: string to be compared
 * @s2: string to be compared
 *
 * Return: ASCII value diff between s1 and s2
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, res;

	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;

	res = s1[i] - s2[i];

	return (res);
}
