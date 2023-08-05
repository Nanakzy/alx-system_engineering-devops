#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: output
 * @src: memory area pointer
 * @n: number of times
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
