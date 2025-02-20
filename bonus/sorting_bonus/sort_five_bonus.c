/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 12:36:44 by imatouil          #+#    #+#             */
/*   Updated: 2025/02/20 10:53:04 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

void	sort_five(t_list **a, t_list **b)
{
	t_list	*min;

	if (!is_sorted(a))
		return ;
	set_position(a);
	min = get_min_node(a);
	if (min -> position == 0)
	{
		while (*a != min)
			rotate_a(a);
	}
	else
	{
		while (*a != min)
			rev_ra(a);
	}
	push_b(a, b);
	sort_four(a, b);
	push_a(a, b);
}
