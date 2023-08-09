#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of grid
 * @height: height of grid
 * Return: Nothing
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **s;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	s = malloc(sizeof(int *) * height);

	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		s[i] = malloc(sizeof(int) * width);

		if (s[i] == NULL)
		{
			for (j = i; j < 0; j++)
				free(s[j]);
		}
		free(s);
		return (NULL);
	}

	for (j = 0; i < width; j++)
	{
		s[i][j] = 0;
	}
	return (s);
}
