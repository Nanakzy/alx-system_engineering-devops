#include <stdlib.h>

typedef struct listint_s {
    int n;
    struct listint_s *next;
} listint_t;

void free_listint(listint_t *head) {
    listint_t *current, *next_node;

    current = head;

    while (current != NULL) {
        next_node = current->next;
        free(current);
        current = next_node;
    }
}

