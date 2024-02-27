#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string one
 * @s2: string two
 * @n: the size
 * Return: concatenated string or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, final_len = 0;
	char *concatenated_str;
	unsigned int i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1])
		len1++;

	while (s2[len2])
		len2++;

	if (n >= len2)
		final_len = len1 + len2;
	else
		final_len = len1 + n;

	concatenated_str = malloc(final_len + 1);

	if (concatenated_str == NULL)
		return (NULL);


	for (i = 0; i < len1; i++)
		concatenated_str[i] = s1[i];

	for (i = 0; i < n && s2[i]; i++)
		concatenated_str[len1 + i] = s2[i];

	concatenated_str[final_len] = '\0';

	return (concatenated_str);
}
