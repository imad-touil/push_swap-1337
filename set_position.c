/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_position.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 16:57:53 by imatouil          #+#    #+#             */
/*   Updated: 2025/01/26 23:46:12 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	set_position(t_list **a, int size)
{
	t_list	*tmp;
	int		i;

	tmp = *a;
	i = 0;
	while (tmp)
	{
		tmp->position = i++;
		tmp = tmp->next;
	}
}
