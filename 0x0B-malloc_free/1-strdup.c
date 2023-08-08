#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: the string to be copied
 * Return: the copied string
 */
char *_strdup(char *str)
{
	int i = 0, j = 1;
	char *s;

	if (str == NULL)
		return (NULL);

	if (str[j])
	{
		j++;
	}

	s = malloc((sizeof(char) * j) + 1);

	if (s == NULL)
		return (NULL);

	while (i < j)
	{
		s[i] = str[i];
		i++;
	}

	s[i] = '\0';
	return (s);
}
