#include <stdio.h>

/**
 * print_alphabet_x10 - prints alphabet times 10
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char c;
	int i;

	i = 0;
	for (i <= 10)
	{
		while (c = 'a'; c <= 'z'; c++)
		{
			putchar(c);
		}
		putchar('\n');
		i++;
	}
}
