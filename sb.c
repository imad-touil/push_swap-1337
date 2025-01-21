/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 10:13:42 by imatouil          #+#    #+#             */
/*   Updated: 2025/01/21 11:20:14 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sb(t_list **head)
{
	t_list	*first;
	t_list	*second;

	first = *head;
	second = (*head) -> next;
	first -> next = second -> next;
	if (second -> next)
		second -> next -> prev = first;
	second -> next = first;
	second -> prev = first -> prev;
	first -> prev = second;
	*head = second;
}
