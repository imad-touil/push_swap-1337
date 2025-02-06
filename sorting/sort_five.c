/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 12:36:44 by imatouil          #+#    #+#             */
/*   Updated: 2025/02/06 21:52:06 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_five(t_list **a, t_list **b)
{
	t_list	*min_index;

	if (!is_sorted(a))
		return ;
	set_position(a);
	min_index = get_min(a);
	if (min_index -> position == 1)
	{
		while (*a != min_index)
			rra(a, 1);
	}
	else
		while (*a != min_index)
			ra(a, 1);
	pb(a, b);
	sort_four(a, b);
	pa(a, b);
}
