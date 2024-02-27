#include <stdio.h>
#include "main.h"

/**
 * _puts - starting point
 * @str: string to print
 * Return: 0
 */
void _puts(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		putchar(str[a]);
		a++;
	}
	putchar('\n');
}
