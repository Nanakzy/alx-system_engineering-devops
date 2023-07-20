#include <stdio.h>

/**
 * print_last_digit - prints the last digit of a number
 * @n: parameter for integer
 *
 * Return: value of lasr digit
 */
int print_last_digit(int n)
{
	int l;

	l = n % 10;
	if (l < 0)
	{
		putchar(-1 + 48);
		return (-1);
	}
	else
	{
		putchar(1 + 48);
		return (1);
	}
}
