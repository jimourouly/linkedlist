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

struct node 
{
	int value;
	int step;
	struct node* next;
};
typedef struct node node_t;

node_t *create_new_node(int value)
{
	node_t *result = malloc(sizeof(node_t));
	result->value = value;
	result->next = NULL;

	return result;
}

node_t *insert_from_beg(node_t **head, node_t *node_to_insert)
{
	node_to_insert->next = *head;
	*head = node_to_insert;
	return node_to_insert;
}

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

void printflist(node_t *head)
{
	int i = 0;
	node_t *temp = head;
	while(temp != NULL)
	{
		temp->step = i;
		printf("node :%d: -  value :%d:\n",temp->step, temp->value);
		temp = temp->next;
		i++;
	}
	printf("\n");
}

void insert_from_end(node_t *node_to_insert, node_t* newnode)
{
	newnode->next = node_to_insert->next;
	node_to_insert->next = newnode;
}

int main(void)
{
	node_t *head = NULL;
	node_t *temp;

	int i = 0;
	while (i < 100)
	{
		temp = create_new_node(i);
		insert_from_beg(&head, temp);
		i++;
	}

	temp = find_node(head, 6);
	insert_from_end(temp, create_new_node(9999));

	temp = find_node(head, 16);
	printf("find :%d:\n", temp->value);

	/* deplacer start point
	head = head->next;*/

	printflist(head);

	return 0;

}
