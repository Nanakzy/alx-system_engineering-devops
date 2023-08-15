#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_fibonacci_sequence - prints the first 98 Fibonacci numbers
 * @n: the number to be printed
 * Return: 0 success
 */
void print_fibonacci_sequence(int n)
{
	int a = 1, b = 2, c;

	printf("%d, %d", a, b);

	for (int count = 2; count < n; ++count)
	{

		c = a + b;
		printf(", %d", c);
		a = b;
		b = c;
	}
}

/**
 * main - prints a sequence
 *
 * Return: 0
 */
int main(void)
{
	print_fibonacci_sequence(98);
	printf("\n");

	return (0);
}
