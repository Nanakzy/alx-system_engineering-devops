#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times the character to be printed
 * Return: 0
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		int i;
		int j;

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (j == i)
					putchar('\\');
				else if (j < i)
					putchar(' ');
			}
			putchar('\n');
		}
	}
}

