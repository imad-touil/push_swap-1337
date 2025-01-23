/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   addfront.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 16:22:50 by imatouil          #+#    #+#             */
/*   Updated: 2025/01/23 16:53:08 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	addfront(t_list **head, int	content)
{
	t_list	*tmp;

	tmp = create_node(content);
	if (!*head)
	{
		*head = tmp;
		return ;
	}
	tmp -> next = *head;
	tmp -> prev = NULL;
	(*head)-> prev = tmp;
	*head = tmp;
}