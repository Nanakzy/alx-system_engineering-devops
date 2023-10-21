#include <stdlib.h>

typedef struct listint_s {
    int n;
    struct listint_s *next;
} listint_t;

void free_listint2(listint_t **head) {
    listint_t *current, *next_node;

    if (head == NULL || *head == NULL) {
        return; // If the list is empty or head is already NULL, nothing to free
    }

    current = *head;

    while (current != NULL) {
        next_node = current->next;
        free(current);
        current = next_node;
    }

    *head = NULL; // Set the head pointer to NULL after freeing all nodes
}

