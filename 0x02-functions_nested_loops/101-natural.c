#include "main.h"
#include <stdio.h>

/**
 * main - computes and prints sum of multiples of 3 and 5
 * Return: Sum
 */
int main(void)
{
	int sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			sum = sum + i;
		}
		printf("%d\n", sum);
		return (0);
	}
}
