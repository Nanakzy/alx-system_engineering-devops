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
	int count;

	printf("%d, %d", a, b);

	count = 2;

	while (count < n)
	{
		c = a + b;
		printf(", %d", c);
		a = b;
		b = c;
		count++;
	}
	printf("\n");
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
