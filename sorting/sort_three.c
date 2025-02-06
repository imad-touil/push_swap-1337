/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 21:19:51 by imatouil          #+#    #+#             */
/*   Updated: 2025/02/05 16:41:09 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"



void	sort_three(t_list **a)
{
	t_list	*tmp;
	// int	second;
	// int	third;

	// first = (*a)->content;
	// second = (*a)->next->content;
	// third = (*a)->next->next->content;
	// if (first > second && second > third)
	// {
	// 	sa(a, 1);
	// 	rra(a, 1);
	// }
	// else if (first > third && third > second)
	// 	ra(a, 1);
	// else if (second > first && first > third)
	// 	rra(a, 1);
	// else if (second > third && third > first)
	// {
	// 	sa(a, 1);
	// 	ra(a, 1);
	// }
	// else if (third > first && first > second)
	// 	sa(a, 1);
	tmp = get_maxindex(a);
	if (tmp == *a)
		ra(a, 1);
	else if (tmp == (*a)-> next)
		rra(a, 1);
	if ((*a)-> content > (*a)-> next -> content)
		sa(a, 1);
	
}
