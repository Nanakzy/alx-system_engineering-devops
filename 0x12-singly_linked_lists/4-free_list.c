#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: a pointer to the head of the list
 */
void free_list(list_t *head)
{
	list_t *present = head;

	while (present != NULL)
	{
		list_t *temp = present;

		present = present->next;
		free(temp->str);
		free(temp);
	}
}
