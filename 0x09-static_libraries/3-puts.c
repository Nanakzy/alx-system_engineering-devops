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
	int a = 0;

	while (str[a] != '\0')
	{
		putchar(str[a]);
		a++;
	}
	putchar('\n');
}
