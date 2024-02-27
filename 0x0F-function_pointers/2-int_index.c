#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: the array in question
 * @size: the number of elements in array
 * @cmp: pointer to the function used
 * If no element in the array matches the condition return -1
 * If the size is less than or equal to 0, the function should also return -1
 * Return: index of first element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}

	return (-1);
}
