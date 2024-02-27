#include "main.h"
#include <stdio.h>

int actual_sqrt_recursion(int n, int m);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to calculate
 * Return: square root of answer
 * If n is not a natural square return - 1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - find the natural square root
 * @n: number to calc
 * @m: the iterate number
 * Return: the square root
 */
int actual_sqrt_recursion(int n, int m)
{
	if (m * m > n)
		return (-1);
	if (m * m == n)
		return (m);
	return (actual_sqrt_recursion(n, m + 1));
}
