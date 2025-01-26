/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 21:19:51 by imatouil          #+#    #+#             */
/*   Updated: 2025/01/26 23:19:48 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_maxindex(t_list **a)
{
	t_list	*tmp;
	int		max;

	tmp = *a;
	max = tmp -> index;
	while (tmp -> next)
	{
		if (tmp -> index > max)
			max = tmp -> index;
		tmp = tmp -> next;
	}
	return (max);
}

void	sort_three(t_list **a)
{
	int	max_index;
	max_index = get_maxindex(a);
	if ((*a)-> index == max_index)
		ra(a, 1);
	else if ((*a)-> next -> index == max_index)
		rra(a, 1);
	if ((*a)-> content > (*a)-> next -> content)
		sa(a, 1);
}
