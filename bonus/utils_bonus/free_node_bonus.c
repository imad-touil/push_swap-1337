/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_node_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 12:44:06 by imatouil          #+#    #+#             */
/*   Updated: 2025/02/22 15:02:49 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

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
