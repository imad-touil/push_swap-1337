/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_large.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 14:21:44 by imatouil          #+#    #+#             */
/*   Updated: 2025/02/02 16:34:22 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_back(t_list **a, t_list **b)
{
	int		max_index;
	t_list	*tmp;

	max_index = list_size(b) - 1;
	tmp = *b;
	while (tmp -> index != max_index)
	{
		rb(b, 1);
		tmp = *b;
	}
	pa(a, b);
}

void	helper(t_list **a, t_list **b, int min, int max)
{
	int		index;

	while (*a)
	{
		index = (*a)-> index;
		if (index >= min && index <= max)
		{
			pb(a, b);
			min++;
			max++;
		}
		else if (index < max)
		{
			pb(a, b);
			rb(b, 1);
			min++;
			max++;
		}
		else if (index > max)
			ra(a, 1);
	}
}

void	sort_large(t_list **a, t_list **b)
{
	int		min;
	int		max;
	t_list	*tmp;

	min = 0;
	max = list_size(a) * 0.05 + 10;
	helper(a, b, min, max);
	tmp = *b;
	while (tmp)
	{
		push_back(a, b);
		tmp = *b;
	}
}
