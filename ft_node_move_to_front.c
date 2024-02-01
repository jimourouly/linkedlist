#include "libft.h"

void ft_node_move_to_front(t_node **head, t_node *node_to_move) 
{
    t_node *current = *head;
    t_node *prev = NULL;

    if (*head == NULL || node_to_move == NULL || *head == node_to_move) 
    return;
    while (current != NULL && current != node_to_move) {
        prev = current;
        current = current->next;
    }
    if (current == NULL) 
    return; 
    if (prev != NULL) prev->next = current->next;
    current->next = *head;
    *head = current;
}
