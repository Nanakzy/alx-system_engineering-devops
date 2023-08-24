#include <stddef.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a list_t list
 * @h: the pointer to a node
 * Return: the number of elements
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
