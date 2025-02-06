/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 13:33:02 by imatouil          #+#    #+#             */
/*   Updated: 2025/02/05 15:29:50 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ra(t_list **head, int key)
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
	if (key)
		write(1, "ra\n", 3);
}
