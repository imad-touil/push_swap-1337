/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_large.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 14:21:44 by imatouil          #+#    #+#             */
/*   Updated: 2025/02/01 13:11:52 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_maxindex(t_list **a)
{
	t_list	*tmp;
	int		max;

	tmp = *a;
	max = tmp -> index;
	while (tmp)
	{
		if (tmp -> index > max)
			max = tmp -> index;
		tmp = tmp -> next;
	}
	return (max);
}

void	push_back(t_list **a, t_list **b)
{
	t_list	*tmp;
	int	max;

	max = get_maxindex(a);
	tmp = *a;
	while (tmp -> index != max)
	{
		if (tmp -> index < list_size(a) / 2)
			ra(a, 1);
		else
			rra(a, 1);
		tmp = tmp -> next;
	}
	pa(a, b);
}

void	sort_large(t_list **a, t_list **b)
{
	int		min;
	int		max;
	int		index;
	t_list	*tmp;

	min = 0;
	max = list_size(a) * 0.05 + 10;
	tmp = *a;
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
			printf("kan Hna\n");
			rb(b, 1);
			min++;
			max++;
		}
		else if (index > max)
			ra(a, 1);
		*a = (*a)-> next;
	}
	push_back(a, b);
}
