/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   addback.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 12:24:29 by imatouil          #+#    #+#             */
/*   Updated: 2025/02/17 16:40:48 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	addback(t_list **head, int content)
{
	t_list	*node;
	t_list	*tmp;

	node = create_node(content);
	if (!node)
		return ;
	if (*head == NULL)
	{
		*head = node;
		(*head)-> index = 0;
		return ;
	}
	tmp = *head;
	while (tmp -> next)
		tmp = tmp -> next;
	tmp -> next = node;
	node -> prev = tmp;
}
