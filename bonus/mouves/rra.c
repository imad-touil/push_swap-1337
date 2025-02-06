/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 11:13:00 by imatouil          #+#    #+#             */
/*   Updated: 2025/02/06 14:45:30 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

void	rev_ra(t_list **head)
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
}
