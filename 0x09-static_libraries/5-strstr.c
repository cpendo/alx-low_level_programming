#include "main.h"

/**
 * _strstr - locates a substring
 *
 * @haystack: string pointer to be checked
 * @needle: string pointer to be compared
 *
 * Return: pointer to beginning of needle or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int len, i;

	for (len = 0; haystack[len] != '\0'; len++)
	{
		for (i = 0; needle[i] != '\0'; i++)
		{
			if (haystack[len + i] != needle[i])
				break;
		}
		if (!needle[i])
			return (&haystack[len]);
	}

	return (NULL);
}
