#include "main.h"
#include <stdio.h>

/**
 * main -  finds and prints the sum of the even-valued fibonacci terms
 *
 * Return: 0 success
 */
int main(void)
{
	int a = 1, b = 2, temp;
	int total_sum = 0;

	while (a <= 4000000)
	{
		if (a % 2 == 0)
		{
			total_sum += a;
		}
		temp = a;
		a = b;
		b = temp + b;
	}

	printf("%d\n", total_sum);

	return (0);
}
