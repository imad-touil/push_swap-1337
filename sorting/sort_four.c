/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_four.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 01:56:33 by imatouil          #+#    #+#             */
/*   Updated: 2025/02/17 16:51:12 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_list	*get_min(t_list **a)
{
	t_list	*tmp;
	t_list	*res;
	int		min;

	tmp = *a;
	res = tmp;
	min = tmp -> content;
	while (tmp)
	{
		if (tmp -> content < min)
		{
			res = tmp;
			min = tmp -> content;
		}
		tmp = tmp -> next;
	}
	return (res);
}

int	is_sorted(t_list **a)
{
	t_list	*tmp;

	tmp = *a;
	while (tmp -> next)
	{
		if (tmp -> content > tmp -> next -> content)
			return (1);
		tmp = tmp -> next;
	}
	return (0);
}

void	sort_four(t_list **a, t_list **b)
{
	t_list	*tmp;
	t_list	*min;

	tmp = *a;
	set_position(a);
	min = get_min(a);
	if (!is_sorted(a))
		return ;
	while (tmp != min)
	{
		ra(a, 1);
		tmp = *a;
	}
	pb(a, b);
	sort_three(a);
	pa(a, b);
}
