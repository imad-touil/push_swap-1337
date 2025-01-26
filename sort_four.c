/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_four.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 01:56:33 by imatouil          #+#    #+#             */
/*   Updated: 2025/01/26 02:52:03 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_four(t_list **a, t_list **b)
{
	t_list	*tmp;

	tmp = *a;
	while (tmp -> index)
	{
		ra(a, 1);
		tmp = tmp -> next;
	}
	pb(a, b);
	sort_three(a);
	pa(a, b);
}
