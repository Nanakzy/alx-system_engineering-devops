#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: the string to be copied
 * Return: the copied string
 */
char *_strdup(char *str)
{
	int i = 0, length;
	char *s;

	if (str == NULL)
		return (NULL);

	while (str[length])
		length++;

	s = malloc(sizeof(char) * (length + 1));

	if (s == NULL)
		return (NULL);

	while (i < length)
	{
		s[i] = str[i];
		i++;
	}

	s[i] = '\0';
	return (s);
}
