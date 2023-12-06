/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroulet <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 16:56:35 by jroulet           #+#    #+#             */
/*   Updated: 2023/12/03 18:11:15 by jroulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>
// Définition de la structure "node" pour une liste chaînée
struct node {
	int value;
	int step;
	struct node* next;
};
typedef struct node node_t;

// Fonction pour créer un nouveau nœud de liste chaînée avec une valeur donnée
node_t *create_new_node(int value)
{
	node_t *result = malloc(sizeof(node_t));
	result->value = value;
	result->next = NULL;

	return result;
}

// Fonction pour insérer un nœud au début de la liste chaînée
node_t *insert_from_beg(node_t **head, node_t *node_to_insert)
{
	node_to_insert->next = *head;
	*head = node_to_insert;
	return node_to_insert;
}

// Fonction pour trouver un nœud avec une valeur donnée dans la liste chaînée
node_t *find_node(node_t *head, int value)
{
	node_t *temp = head; 
	while (temp != NULL)
	{
		if (temp->value == value)
			return temp;
		temp = temp->next;
	}
	return NULL;
}

// Fonction pour afficher les éléments de la liste chaînée avec leurs étapes
void printflist(node_t *head)
{
	int i = 0;
	node_t *temp = head;
	while(temp != NULL)
	{
		temp->step = i;
		printf("node :%d: -  value :%d:\n", temp->step, temp->value);
		temp = temp->next;
		i++;
	}
	printf("\n");
}

// Fonction pour insérer un nœud après un nœud donné
void insert_from_end(node_t **head, node_t* newnode)
{
    if(*head == NULL)
    {
        *head = newnode;
    }
    else 
    {
        node_t *current = *head;
        while(current->next != NULL)
        {
            current = current->next;
        }
        current->next = newnode;
    }
}

void append_node(node_t *current, int value)
{
    node_t *newnode = create_new_node(value);
    newnode->next = current->next;
    current->next = newnode;

}

int main(int arc, char **argv)
{
	node_t *head = NULL;
	node_t *temp;
    node_t *tofind;

	int i = 0;
	while (i < atoi(argv[1]))
	{
		temp = create_new_node(i);
        insert_from_beg(&head, temp);
		//insert_from_end(&head,temp);
        i++;
	}

	tofind = find_node(head, atoi(argv[2]));
    if (temp != NULL)
    {
        append_node(tofind, atoi(argv[3]));
    }
    else
    {
        printf("Erreur unfoudable node\n");
    }
	/* deplacer start point
	head = head->next;*/

	printflist(head);

	return 0;
}
