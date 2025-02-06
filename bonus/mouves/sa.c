/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 09:16:55 by imatouil          #+#    #+#             */
/*   Updated: 2025/02/06 14:47:35 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

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
