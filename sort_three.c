/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 21:19:51 by imatouil          #+#    #+#             */
/*   Updated: 2025/01/26 23:39:43 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_list **a)
{
	int	first = (*a)->content;
	int	second = (*a)->next->content;
	int	third = (*a)->next->next->content;

	if (first > second && second > third)
	{
		sa(a, 1);
		rra(a, 1);
	}
	else if (first > third && third > second)
		ra(a, 1);
	else if (second > first && first > third)
		rra(a, 1);
	else if (second > third && third > first)
	{
		sa(a, 1);
		ra(a, 1);
	}
	else if (third > first && first > second)
		sa(a, 1);
}

