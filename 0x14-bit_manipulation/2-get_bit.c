#include "main.h"
#include <stdio.h>

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: the value of a bit
 * @index: the given index
 * Return: result
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;
	int bit_value;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	mask = 1UL << index;
	bit_value = (n & mask) >> index;

	return (bit_value);
}
