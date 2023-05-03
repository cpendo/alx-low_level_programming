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
	unsigned int result = 0;
	int sign = 1, i = 0;

	while (s[i] != '\0' &&  (s[i] < '0' || s[i] > '9'))
	{
		if (s[i]  == '-')
			sign *= -1;
		i++;
	}
	while (s[i] && (s[i] >= '0' && s[i] <= '9'))
	{
		result = result * 10 + (s[i] - '0');
		i++;
	}

	return (result * sign);
}
