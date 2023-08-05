#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: output
 * @src: output
 * @n: input
 * Return: String
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
