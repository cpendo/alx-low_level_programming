#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 *
 * @ac: number of arguments
 * @av: array of arguments
 *
 * Return: pointer to a new string, or NULL
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, index, size = ac;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			size++;
	}

	str = malloc(sizeof(char) * size + 1);

	if (str == NULL)
		return (NULL);

	index = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			str[index++] = av[i][j];

		str[index++] = '\n';
	}

	str[size] = '\0';

	return (str);
}
