/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_append_node.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroulet <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 14:10:15 by jroulet           #+#    #+#             */
/*   Updated: 2023/12/09 16:28:30 by jroulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_node_append(t_node *current, int value)
{
	t_node	*newnode;

	newnode = ft_node_create_new(value);
	newnode->next = current->next;
	current->next = newnode;
}
