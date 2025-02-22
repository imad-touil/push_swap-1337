/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_index_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 22:44:30 by imatouil          #+#    #+#             */
/*   Updated: 2025/02/22 15:03:27 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

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
