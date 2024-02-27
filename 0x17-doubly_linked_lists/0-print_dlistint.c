#include <stdio.h>
#include <stddef.h>
#include "lists.h"
/**
 * print_dlistint - print all elements of a doubly linked list
 * @h: the header to a node
 * Return: result
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		node_count++;
	}

	return (node_count);
}
