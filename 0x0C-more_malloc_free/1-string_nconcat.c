#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 *
 * @s1: pointer to string s1
 * @s2: pointer to string s2
 * @n: bytes of s2 to add to s1
 *
 * Return: pointer to concat string, or NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *string;
	unsigned int len = n, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		len++;

	string = malloc(sizeof(char) * (len + 1));

	if (string == NULL)
		return (NULL);

	len = 0;

	for (i = 0; s1[i]; i++)
		string[len++] = s1[i];

	for (i = 0; s2[i] && i < n; i++)
		string[len++] = s2[i];

	string[len] = '\0';

	return (string);
}
