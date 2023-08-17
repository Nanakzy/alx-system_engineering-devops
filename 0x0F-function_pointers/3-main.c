#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the results of operations performed
 * @argc: number of arguments
 * @argv: argumrnt vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	num1 = atoi(argv[1]);
	op = argv[2];
	num2 = atoi(argv[3]);

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		return (99);
	}
	if ((*op == '/' && num2 == 0) || (*op == '%' && num2 == 0))
	{
		printf("Error\n");
		return (100);

		printf("%d\n", get_op_func(op)(num1, num2));

		}
	return (0);
}
