#include <stdio.h>
/**
 * main - starting point
 * description - prints number in base 16
 * Return: Always 0
 */
int main(void)
{
	int n;
	int m;

	for (n = 48; n  <= 57; n++)
	{
		putchar(n);
	}
	for (m = 97; m <= 102; m++)
	{
		putchar(m);
	}
	putchar('\n');
	return (0);
}
