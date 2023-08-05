#include "main.h"
#include <stdio.h>
/**
 * _puts - entry
 * @str: string
 *
 * Return: Always 0 (Success)
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');
}
