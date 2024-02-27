#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: the string to be printed
 * Return: the string length
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
