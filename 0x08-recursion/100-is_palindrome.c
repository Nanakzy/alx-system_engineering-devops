#include "main.h"

/**
 * _strlen_recursion - to find the length of string
 * @s: length of string
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * is_palindrome - check if a string is a palindrome using recursion
 * @s: the string to check
 * Return: 1 if palindrome, otherwise 0
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (check_string(s, 0, len - 1));
}

/**
 * check_string - check for the character of string
 * @s: the string
 * @small: small iterator
 * @large: largest iterator
 * Return: 1 if palindome otherwise 0
 */
int check_string(char *s, int small, int large)
{
	if (small >= large)
		return (1);
	if (s[small] == s[large])
		return (check_string(s, small + 1, large - 1));

	return (0);
}
