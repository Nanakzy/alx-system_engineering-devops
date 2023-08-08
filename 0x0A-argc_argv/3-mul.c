#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the result of the multiplication
 * @argc: the number of arguments
 * @argv: the array or argument vector
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)
	{
		printf("error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
