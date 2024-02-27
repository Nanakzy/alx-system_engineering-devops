#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *argstostr - concatenates all the arguments of the program
 * @ac: number of arguments
 * @av: argument vector or array
 * Return: pointer to concatenated string or NULL on failure
 */
char *argstostr(int ac, char **av)
{
	int i, j, h, c = 0;
	char *p;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			c++;
		}
		c++;
	}

	p = malloc(sizeof(char) * c + 1);

	if (p == NULL)
	{
		return (NULL);
	}

	h = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			p[h++] = av[i][j];
		}
		p[h++] = '\n';
	}
	p[h] = '\0';

	return (p);
}
