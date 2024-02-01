#include "libft.h"

void ft_node_move_to_end(t_node **head, t_node *node_to_move)
{

    t_node *current = *head;
    t_node *prev = NULL;
    
    if (*head == NULL || node_to_move == NULL || node_to_move->next == NULL) 
    return;
    while (current != NULL && current != node_to_move) {
        prev = current;
        current = current->next;
    }
    if (current == NULL) 
    return; 
    if (prev != NULL) prev->next = current->next;
    if (current->next == NULL) 
    return;
    t_node *last = *head;
    while (last->next != NULL) {
        last = last->next;
    }
    last->next = current;
    current->next = NULL;
}