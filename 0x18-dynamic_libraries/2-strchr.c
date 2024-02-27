#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: string input
 * @c: pointer to output
 * Return: pointer to the first occurrence of the char c otherwise NULL
 */
char *_strchr(char *s, char c)
{
	int count;

	for (count = 0; s[count] >= '\0'; count++)
	{
		if (s[count] == c)
			return (s + count);
	}
	return ('\0');
}
