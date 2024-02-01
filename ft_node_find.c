/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_node.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroulet <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 14:00:03 by jroulet           #+#    #+#             */
/*   Updated: 2023/12/09 16:30:37 by jroulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_node	*ft_node_find(t_node *head, int value)
{
	t_node	*temp;

	temp = head;
	while (temp != NULL)
	{
		if (temp->value == value)
			return (temp);
		temp = temp->next;
	}
	return (NULL);
}
