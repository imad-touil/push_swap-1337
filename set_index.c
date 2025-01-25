/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_index.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 22:44:30 by imatouil          #+#    #+#             */
/*   Updated: 2025/01/25 23:10:54 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	set_index(t_list **head, int size)
{
	t_list	*tmp;
	t_list	*cuurent;
	int		counter;
	int		i;

	i = 0;
	tmp = *head;
	while (i < size)
	{
		counter = 0;
		cuurent = *head;
		while (cuurent)
		{
			if (tmp -> content > cuurent -> content)
				counter++;
			cuurent = cuurent -> next;
		}
		tmp -> index = counter;
		tmp = tmp -> next;
		i++;
	}
}