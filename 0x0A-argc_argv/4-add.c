#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: the number of arguments
 * @argv: the argument vector
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	int a;
	char *c;
	unsigned int b, sum = 0;

	if (argc > 1)
	{
		for (a = 1; a < argc; a++)
		{
			c = argv[a];

			for (b = 0; b < strlen(c); b++)
			{
				if (c[b] < '0' || c[b] > '9')
				{
					printf("Error\n");
					return (1);
				}
			}

			sum += atoi(c);
		}

		printf("%u\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
