#include "main.h"

/**
 * print_number - prints an integer
 * @n: the integer printed
 * Return: 0
 */
void print_number(int n)
{
	if (n >= 0 && n <= 127)
	{
		putchar(n);
	}
	putchar('\n');
}
