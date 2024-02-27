#include <stdio.h>
#include <ctype.h>

/**
 * _isalpha - checks for alphabetic character
 * @c: character to be checked
 * Return: 1 if c is a letter or 0 otherwise
 */
int _isalpha(int c)
{
	while ((c >= 65 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	return (0);
}
