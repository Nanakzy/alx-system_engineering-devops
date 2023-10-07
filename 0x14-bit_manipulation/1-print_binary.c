#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints the binary representation of a number
 * @n: the number to be represented
 * Return: printed binary
 */
void print_binary(unsigned long int n)
{
	int num_bits = sizeof(unsigned long int) * 8;
	int i;
	int leading_zero = 1;

	for (i = num_bits - 1; i >= 0; i--)
	{
		unsigned long int mask = 1UL << i;

		if ((n & mask) || !leading_zero)
		{
			putchar((n & mask) ? '1' : '0');
			leading_zero = 0;
		}
	}

	if (leading_zero)
	{
		putchar('0');
	}

	putchar('\n');
}
