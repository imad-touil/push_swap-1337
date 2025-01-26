/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   addback.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 12:24:29 by imatouil          #+#    #+#             */
/*   Updated: 2025/01/25 23:29:45 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// int	set_index(t_list **head, int content)
// {
// 	int		counter;
// 	t_list	*tmp;

// 	counter = 0;
// 	tmp = *head;
// 	while (tmp -> next)
// 	{
// 		if (tmp -> content < content)
// 			counter++;
// 		tmp	= tmp -> next;
// 	}
// 	return (counter);
// }

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
