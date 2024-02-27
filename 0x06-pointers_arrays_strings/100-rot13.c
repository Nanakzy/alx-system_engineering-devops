#include "main.h"
#include <stdio.h>

/**
 * rot13 -  encodes a string using rot13
 * @char: the string to encode
 * @str: the string
 *
 * Return: 0
 */
char *rot13(char *str)
{
	char *original = str;
	char *result = str;

	if (str == NULL)
		return (NULL);

	for (; *original != '\0'; original++, result++)
	{
		char c = *original;

		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		{
			char base = (c >= 'a' && c <= 'z') ? 'a' : 'A';

			*result = (c - base + 13) % 26 + base;
		}
		else
		{
			*result = c;
		}
	}

	*result = '\0';

	return (str);
}

int main(void)
{
	char input[] = "Hello, World!";

	printf("Original: %s\n", input);

	char *encoded = rot13(input);

	printf("Encoded:  %s\n", encoded);

	return (str);
}
