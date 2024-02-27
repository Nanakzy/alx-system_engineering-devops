#include <stdio.h>
#include "lists.h"

/**
 * reverse_listint - Reverse a listint_t linked list.
 * @head: A pointer to the pointer of the head of the list.
 *
 * Return: A pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next;

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;

	return (prev);
}
