#include <stdio.h>
#include <stdlib.h>
/**
 *_abs - computes the absolute value of an integer
 * @c: the value to check
 * Return: value of interger
 */
int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;
		return (abs_val);
	}
	return (c);
}
