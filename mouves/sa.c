/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 09:16:55 by imatouil          #+#    #+#             */
/*   Updated: 2025/02/05 15:30:15 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(t_list **head, int key)
{
	t_list	*tmp;

	if (!head || !(*head) || !(*head)-> next)
		return ;
	tmp = (*head)-> next;
	(*head)-> next = tmp -> next;
	if (tmp -> next)
		tmp -> next -> prev = *head;
	tmp -> next = *head;
	tmp -> prev = (*head)-> prev;
	(*head)-> prev = tmp;
	*head = tmp;
	if (key != 0)
		write(1, "sa\n", 3);
}
