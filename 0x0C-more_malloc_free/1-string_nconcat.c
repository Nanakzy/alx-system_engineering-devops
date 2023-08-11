#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string one
 * @s2: string two
 * @n: the size
 * Return: concatenate string or NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a = 0, b = 0, c = 0, d = 0;
	char *str;

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";

	while (s1[a])
		a++;

	while (s2[b])
		b++;
	if (n >= b)
		d = a + b;
	else
		d = a + n;

	str = malloc(sizeof(char) * d + 1);

	if (str == NULL)
		return (NULL);

	b = 0;
	while (c < d)
	{
		if (c < a)
			str[c] = s1[c];

		if (c >= a)
		{
			str[c] = s2[b];
			b++;
		}
		c++;
	}
	str[c] = '\0';
	return (str);
}
