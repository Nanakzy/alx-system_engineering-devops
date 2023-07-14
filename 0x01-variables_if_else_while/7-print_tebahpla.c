#include <stdio.h>
/**
 * main - starting point
 * description - prints alphabet in reverse
 * Return: Always 0
 */
int main(void)
{
	int n = 97;

	while (n >= 122)
	{
		putchar(n);
		n--;
	}
	return (0);
}
