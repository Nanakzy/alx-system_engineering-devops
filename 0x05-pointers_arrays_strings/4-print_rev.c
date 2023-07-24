#include "main.h"

/**
 * print_rev -  prints a string, in reverse
 * @s: the string to print in reverse
 * Return: 0
 */
void print_rev(char *s)
{
	int a;
	int b;

	b = 0;
	while (s[b] != '\0')
		b++;

	for (a = b - 1; a >= 0; a--)
	{
		putchar(s[a]);
	}
	putchar('\n');
}
