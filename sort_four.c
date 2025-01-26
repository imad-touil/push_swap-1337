/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_four.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 01:56:33 by imatouil          #+#    #+#             */
/*   Updated: 2025/01/26 17:40:26 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_four(t_list **a, t_list **b)
{
	t_list	*tmp;
	t_list	*min;
	int		i;

	tmp = *a;
	i = 0;
	while (tmp)
	{
		if (tmp -> index == 0)
			min = tmp;
		tmp = tmp -> next;
	}
	tmp = *a;
	while (tmp != min)
	{
		if (tmp -> position == 1)
			ra(a, 1);
		else
			rra(a, 1);
		tmp = tmp -> next;
	}
	pb(a, b);
	printf("hnaaaaa %d\n", (*a)-> content);
	sort_three(a);
	pa(a, b);
}
