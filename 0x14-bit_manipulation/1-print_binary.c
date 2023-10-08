#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints the binary representation of a number
 * @n: the number to be represented
 */
void print_binary(unsigned long int n)
{
	int i;
	int num_bits = sizeof(unsigned long int) * 8;
	int printed = 0;

	if (n == 0)
	{
		putchar('0');
		putchar('\n');
		return;
	}

	for (i = num_bits - 1; i >= 0; i--)
	{
		unsigned long int mask = 1UL << i;

		if ((n & mask) >> i)
		{
			putchar('1');
			printed = 1;
		}
		else if (printed)
		{
			putchar('0');
		}
	}

	putchar('\n');
}
