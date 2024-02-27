#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Return: 0
 */
void times_table(void)
{
	int l, j, n;

	for (l = 0; l <= 9; l++)
	{
		for (j = 0; j <= 9; j++)
		{
			n = l * j;

			if ((n / 10) == 0)
			{
				if (j != 0)
					_putchar(' ');
				_putchar(n + '0');

				if (j == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
				if (j == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
