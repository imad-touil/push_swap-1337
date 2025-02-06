/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_large.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 14:21:44 by imatouil          #+#    #+#             */
/*   Updated: 2025/02/05 22:13:14 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_list	*get_maxindex(t_list **a)
{
	t_list	*tmp;
	t_list	*res;
	int		max;

	tmp = *a;
	res = tmp;
	max = tmp -> content;
	while (tmp)
	{
		if (tmp -> content > max)
		{
			res = tmp;
			max = tmp -> content;
		}
		tmp = tmp -> next;
	}
	return (res);
}

void	push_back(t_list **a, t_list **b)
{
	t_list	*res;

	set_position(b);
	res = get_maxindex(b);
	if (res -> position == 0)
	{
		while (*b != res)
			rb(b, 1);
	}
	else
	{
		while (*b != res)
			rrb(b, 1);
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
		else if (index < min)
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

	min = 0;
	max = list_size(a) * 0.048 + 10;
	helper(a, b, min, max);
	while (*b)
		push_back(a, b);
}
