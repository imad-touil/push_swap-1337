/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa_bonus.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 09:16:55 by imatouil          #+#    #+#             */
/*   Updated: 2025/02/20 10:52:29 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

void	swap_a(t_list **head)
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
}
