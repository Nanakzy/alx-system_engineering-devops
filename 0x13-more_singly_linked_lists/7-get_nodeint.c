#include "lists.h"


/**
 * get_nodeint_at_index - Function to get the nth node of the linked list
 * @head: the pointer to the head
 * @index: the number
 * Return: NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL)
	{
		if (count == index)
		{
			return (head);
		}
		head = head->next;
		count++;
	}
	return (NULL);
}
