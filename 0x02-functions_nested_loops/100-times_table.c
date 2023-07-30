#include "main.h"
#include <stdio.h>

/**
 * print_times_table -  prints the n times table, starting zero
 * @n: the integer value
 * Return: 0
 */
void print_times_table(int n)
{
	int a, b, result;

	if (n >= 0 && n <= 15)
	{
		for (a = 0; a <= n; a++)
		{
			for (b = 0; b <= n; b++)
			{
				result = a * b;

				if (b == 0)
				{
					_putchar('0');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
				}
				if (result < 100)
				{
					_putchar(' ');
				}
				if (result < 10)
			}
			 _putchar(' ');
			 {
				 if (result >= 100)
			 }
			 _putchar((result / 100) + '0');
			 _putchar
