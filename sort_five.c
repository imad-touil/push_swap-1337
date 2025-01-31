/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 12:36:44 by imatouil          #+#    #+#             */
/*   Updated: 2025/01/29 14:08:21 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_five(t_list **a, t_list **b)
{
	t_list	*tmp;
	int		min_index;

	if (!is_sorted(a))
		return ;
	tmp = *a;
	min_index = get_minindex(a);
	while (tmp -> index != min_index)
	{
		rra(a, 1);
		tmp = *a;
	}
	pb(a, b);
	sort_four(a, b);
	pa(a, b);
}
