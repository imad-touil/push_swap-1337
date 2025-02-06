/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 12:36:44 by imatouil          #+#    #+#             */
/*   Updated: 2025/02/06 14:49:20 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

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
		rev_ra(a);
		tmp = *a;
	}
	push_b(a, b);
	sort_four(a, b);
	push_a(a, b);
}
