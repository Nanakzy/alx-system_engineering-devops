#include <stdio.h>

/**
 * print_sign - prints the sign of a number
 * @param n The input integer
 * @Returns 1 and prints + if n is greater than zero
 * @Returns 0 and prints 0 if n is zero
 * @Returns -1 and prints - if n is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		putchar(45);
		return (-1);
	}
	else
	{
		putchar(48);
		return (0);
	}
}
