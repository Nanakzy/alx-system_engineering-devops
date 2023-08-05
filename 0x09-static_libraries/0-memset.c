#include "main.h"

/**
 * _memset -  fills memory with a constant byte
 * @s: memory area to fill
 * @b: character to copy
 * @n: number of copy times
 * Return: pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
