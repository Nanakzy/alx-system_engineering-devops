#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: the input
 * Return: size of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	s++;
	return (_strlen_recursion(s) + 1);
}

/**
 * main - starting point
 * Return: 0
 */
int main(void)
{
	char str[] = "Hello World!";
	int length = _strlen_recursion(str);

	printf("Length of the string: %d\n", length);
	return (0);
}
