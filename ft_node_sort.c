#include "libft.h"

void ft_node_sort(t_node **head) {
    int swapped;
    int temp;
    t_node *current;
    t_node *last = NULL;
    
    if (*head == NULL) return;
    swapped = 1;
    while (swapped == 1) {
        swapped = 0;
        current = *head;

        while (current->next != last) {
            if (current->value > current->next->value) {
                temp = current->value;
                current->value = current->next->value;
                current->next->value = temp;
                swapped = 1;
            }
            current = current->next;
        }
        last = current;
    }
}