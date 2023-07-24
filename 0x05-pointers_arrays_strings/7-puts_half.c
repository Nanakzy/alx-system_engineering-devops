#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: the portion of string to print
 * @n: half length of string
 * print the second half of the string
 * print last n if character is odd
 * Return: 0
 */
void puts_half(char *str)
{
	int full;
	int half;

	full = 0;
	while (str[full] != '\0')
		full++;

	half = full / 2;

	if (full % 2 != 0)
		half++;

	while (half < full)
	{
		putchar(str[half]);
		half++;
	}
	putchar('\n');
}
