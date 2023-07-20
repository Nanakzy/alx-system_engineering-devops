#include "main.h"

/**
 *  print_line -  draws a straight line in the terminal
 *  @n: number of times the character to be printed
 *
 *  Return: print \n if n is zero or less
 */
void print_line(int n)
{
	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			putchar(' ');
		}
		putchar('\n');
	}
}
