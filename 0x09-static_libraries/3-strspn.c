#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: string searched
 * @accept: measured prefix
 * Return: no of bytes in segment accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int count;

	while (*s)
	{
		for (count = 0; accept[count]; count++)
		{
			if (*s == accept[count])
			{
				bytes++;
				break;
			}
			else if (accept[count + 1] == '\0')
				return (bytes);
			}
			s++;
		}
		return (bytes);
}
