#include "main.h"
#include <stdio.h>

/**
 * main - prints the largest prime factor
 * Return: 0
 */
int main(void)
{
	unsigned long int i, n = 612852475143UL;

	for (i = 3; i * i <= n; i += 2)
	{
		while (n % i == 0 && n != i)
			n = n / i;
	}
	printf("%lu\n", n);
	return (0);
}
