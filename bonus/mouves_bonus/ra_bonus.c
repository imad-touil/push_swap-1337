/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra_bonus.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 13:33:02 by imatouil          #+#    #+#             */
/*   Updated: 2025/02/20 10:51:57 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

void	rotate_a(t_list **head)
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
