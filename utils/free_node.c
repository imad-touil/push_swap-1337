/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_node.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 12:44:06 by imatouil          #+#    #+#             */
/*   Updated: 2025/02/05 16:21:41 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	free_node(t_list **head)
{
	t_list	*tmp;

	while (*head)
	{
		tmp = *head;
		*head = (*head)-> next;
		free(tmp);
	}
}
