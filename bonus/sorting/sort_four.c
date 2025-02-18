/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_four.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 01:56:33 by imatouil          #+#    #+#             */
/*   Updated: 2025/02/17 15:44:50 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

int	get_minindex(t_list **a)
{
	t_list	*tmp;
	int		min;

	tmp = *a;
	min = tmp -> index;
	while (tmp)
	{
		if (tmp -> index < min)
			min = tmp -> index;
		tmp = tmp -> next;
	}
	return (min);
}

int	is_sorted(t_list **a)
{
	t_list	*tmp;

	if (!a || !*a)
		return (0);
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
	int		min_index;

	tmp = *a;
	min_index = get_minindex(a);
	if (!is_sorted(a))
		return ;
	while (tmp -> index != min_index)
	{
		rotate_a(a);
		tmp = *a;
	}
	push_b(a, b);
	sort_three(a);
	push_a(a, b);
}
