#include "main.h"
#include <stdio.h>

/**
 * print_times_table -  prints the n times table, starting from zero
 * @n: the integer value
 * Return: void
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
					printf("%d", result);
				}
				else
				{
					printf(", %3d", result);
				}
			}
			printf("\n");
		}
	}
}
