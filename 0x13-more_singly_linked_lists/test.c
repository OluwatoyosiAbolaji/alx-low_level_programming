#include "lists.h"
listint_t *reverse_listint(listint_t **head)
{
    listint_t* prev = NULL;
    listint_t* current = *head;
    while (current != NULL) {
        *head = current->next;
        current->next = prev;
        prev = current;
        current = *head;
    }
    return prev;
}
