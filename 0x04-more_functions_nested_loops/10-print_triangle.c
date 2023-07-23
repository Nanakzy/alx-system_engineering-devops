#include <stdio.h>
#include "main.h"

/**
 * print_triangle -  prints a triangle
 * @size: the size of triangle
 * If size is 0 or less, the function should print only a new line
 * Return: void
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		putchar('\n');
	}
	else
	{
		int i;
		int j;
	{
		for (i = 0; i < size; i++)
		{
			putchar('#');
		}
		for (j = 0; j <= i; j++)
		{
			putchar(' ');
		}
	}
	putchar('\n');
	}
}
