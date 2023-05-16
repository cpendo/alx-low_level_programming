#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in
 * memory containing a copy of the parameter
 *
 * @str: string to be copied
 *
 * Return: pointer to a newly allocated space or NULL
 */

char *_strdup(char *str)
{
	char *s;
	int len = 0, i;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	s = malloc(sizeof(char) * (len + 1));

	if (s == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		s[i] = str[i];

	return (s);
}
