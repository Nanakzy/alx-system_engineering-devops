#include "main.h"

/**
 * _strstr - locates a substring.
 * @haystack: string to be searched
 * @needle: substring to search for
 * Return: pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		i = 0;

		while (haystack[i] == needle[i])
		{
			if (needle[i + 1] == '\0')
				return (haystack);

			i++;
		}
		haystack++;
	}
	return ('\0');
}
