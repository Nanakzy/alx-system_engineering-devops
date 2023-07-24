#include "main.h"

/**
 * puts2 -  prints every character of a string, starting with the first char
 * @str: the printed character
 * Return: 0
 */
void puts2(char *str)
{
	int y = 0;

	while (str[y] != '\0')
	{
		if (y % 2 == 0)
		{
			putchar(str[y]);
		}
		y++;
	}
	putchar('\n');
}
