#include "main.h"

/**
 * _atoi - convert a string to an integer
 *
 * @s: string to be converted
 *
 * Return: integer of the string
 */

int _atoi(char *s)
{
	int result = 0, i = 0;
	int sign = 1;

	while (s[i] == ' ')
	{
		i++;
	}

	if (s[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (s[i] == '+')
	{
		i++;
	}

	while (s[i] >= '0' && s[i] <= '9')
	{
		result = result * 10 + (s[i] - '0');
		i++;
	}

	return (result * sign);
}