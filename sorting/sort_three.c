/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 21:19:51 by imatouil          #+#    #+#             */
/*   Updated: 2025/02/06 18:11:51 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_three(t_list **a)
{
	t_list	*tmp;

	tmp = get_maxindex(a);
	if (tmp == *a)
		ra(a, 1);
	else if (tmp == (*a)-> next)
		rra(a, 1);
	if ((*a)-> content > (*a)-> next -> content)
		sa(a, 1);
}
