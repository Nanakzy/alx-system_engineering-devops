#include <stdio.h>
/**
 * main - starting point
 * Description - prints the alphabet in lowercase
 * Return: Alwaays 0
 */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
