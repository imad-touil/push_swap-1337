/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 11:13:00 by imatouil          #+#    #+#             */
/*   Updated: 2025/01/24 17:44:37 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_list **head, int key)
{
	t_list	*tmp;

	if (!head || !*head || !(*head)-> next)
		return ;
	tmp = *head;
	while (tmp -> next)
		tmp = tmp -> next;
	tmp -> prev -> next = NULL;
	tmp -> next = *head;
	tmp -> prev = NULL;
	(*head)-> prev = tmp;
	*head = tmp;
	if (!key)
		write(1, "rra\n", 4);
}
