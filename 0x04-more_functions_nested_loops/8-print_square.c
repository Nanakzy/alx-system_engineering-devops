#include "main.h"

/**
 * print_square -  prints a square
 * @size: size of the square
 *
 * Return: 0
 */
void print_square(int size)
{
	if (size <= 0)
	{
		putchar('\n');
	}
	else
	{
		int i;
		int j;

		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				putchar('#');
			}
			putchar('\n');
		}
	}
}
