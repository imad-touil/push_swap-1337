/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_size_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 17:50:56 by imatouil          #+#    #+#             */
/*   Updated: 2025/02/22 15:04:14 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

int	list_size(t_list **head)
{
	int		counter;
	t_list	*tmp;

	if (!head || !*head)
		return (0);
	counter = 0;
	tmp = *head;
	while (tmp)
	{
		counter++;
		tmp = tmp -> next;
	}
	return (counter);
}
