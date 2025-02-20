/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra_bonus.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 11:13:00 by imatouil          #+#    #+#             */
/*   Updated: 2025/02/20 10:52:18 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

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
