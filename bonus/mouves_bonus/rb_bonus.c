/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb_bonus.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 17:37:43 by imatouil          #+#    #+#             */
/*   Updated: 2025/02/20 10:52:00 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

void	rotate_b(t_list **head)
{
	t_list	*tmp;
	t_list	*tail;

	if (!head || !*head || !(*head)-> next)
		return ;
	tmp = *head;
	*head = tmp -> next;
	(*head)-> prev = NULL;
	tail = *head;
	while (tail -> next)
		tail = tail -> next;
	tail -> next = tmp;
	tmp -> prev = tail;
	tmp -> next = NULL;
}
