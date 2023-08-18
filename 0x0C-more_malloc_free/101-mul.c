#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_positive_integer - check if a string represents a positive integer
 * @str: string to be checked
 * Return: 1 if positive integer, 0 otherwise
 */
int is_positive_integer(const char *str)
{
	int i;

	if (str[0] == '\0')
	{
		return (0);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		if (!isdigit(str[i]))
		{
			return (0);
		}
	}

	return (1);
}

/**
 * main - checks no of argument
 * @argc: number of argumments
 * @argv: the argument vector
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	char *num1_str, *num2_str;
	int num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	num1_str = argv[1];
	num2_str = argv[2];

	if (!is_positive_integer(num1_str) || !is_positive_integer(num2_str))
	{
		printf("Error\n");
	return (98);
	}

	num1 = atoi(num1_str);
	num2 = atoi(num2_str);

	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
