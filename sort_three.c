/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 21:19:51 by imatouil          #+#    #+#             */
/*   Updated: 2025/01/26 17:41:24 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_list **a)
{
	int	max_index;

	max_index = list_size(a) - 1;
	if ((*a)-> index == max_index)
		ra(a, 1);
	else if ((*a)-> next -> index == max_index)
		rra(a, 1);
	if ((*a)-> content > (*a)-> next -> content)
		sa(a, 1);
}
