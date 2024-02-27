#include "main.h"
#include <stdio.h>

/**
 * _atoi - converts
 * @s: the striing
 * Return: 0
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;

	while (*s == ' ' || *s == '\t' || *s == '\n')
		s++;

	if (*s == '-')
	{
		sign = -1;
		s++;
	}
	else if (*s == '+')
		s++;
}
