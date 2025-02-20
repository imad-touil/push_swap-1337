/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_large_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 14:21:44 by imatouil          #+#    #+#             */
/*   Updated: 2025/02/20 10:53:10 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

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
			rotate_b(b);
	}
	else
	{
		while (*b != res)
			rev_rb(b);
	}
	push_a(a, b);
}

void	helper(t_list **a, t_list **b, int min, int max)
{
	int		index;

	while (*a)
	{
		index = (*a)-> index;
		if (index >= min && index <= max)
		{
			push_b(a, b);
			min++;
			max++;
		}
		else if (index < min)
		{
			push_b(a, b);
			rotate_b(b);
			min++;
			max++;
		}
		else if (index > max)
			rotate_a(a);
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
