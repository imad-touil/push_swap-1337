/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_position.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 13:20:52 by imatouil          #+#    #+#             */
/*   Updated: 2025/02/04 13:19:49 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	set_position(t_list **a)
{
	t_list	*tmp;
	int		i;
	int		size;

	tmp = *a;
	size = list_size(a);
	i = 0;
	while (tmp)
	{
		if (i <= size / 2)
			tmp->position = 0;
		else
			tmp->position = 1;
		tmp = tmp->next;
		i++;
	}
}
