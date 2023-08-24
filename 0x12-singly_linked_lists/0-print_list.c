#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: the pointer to a node
 * Return: count
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			count += printf("[0] ");
		else
			count += printf("%s", h->str);
		count += printf(" ");
		h = h->next;
		count += printf("\n");
	}
	return (count);
}
