/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_node_list.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroulet <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 14:08:00 by jroulet           #+#    #+#             */
/*   Updated: 2023/12/09 16:28:07 by jroulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_node_print_list(t_node *head)
{
	int		i;
	t_node	*temp;

	i = 0;
	temp = head;
	while (temp != NULL)
	{
		temp->step = i;
		printf("node :%d: -  value :%d:\n", temp->step, temp->value);
		temp = temp->next;
		i++;
	}
	printf("\n");
}
