#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name -  prints a name
 * @name: the variable to print
 * @f: pointer to function
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
