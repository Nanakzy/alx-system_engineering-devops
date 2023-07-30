#include "main.h"

/**
 * print_number - prints an integer
 * @n: the integer printed
 * Return: 0
 */
void print_number(int n)
{
	unsigned int i;

	if (n < 0)
	{
		putchar('-');
		i = -n;
	}
	else
	{
		i = n;
	}
	if (i / 10 == 0)
	{
		putchar(i + '0');
		return;
	}
	print_number(i / 10);
	putchar(i % 10 + '0');
}
