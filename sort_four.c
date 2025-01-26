/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_four.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 01:56:33 by imatouil          #+#    #+#             */
/*   Updated: 2025/01/26 23:51:27 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

void	sort_four(t_list **a, t_list **b)
{
	t_list	*tmp;
	int		min_index;

	tmp = *a;
	min_index = get_minindex(a);
	while (tmp -> index != min_index)
	{
		ra(a, 1);
		tmp = *a;
	}
	pb(a, b);
	sort_three(a);
	pa(a, b);
}





// void	sort_four(t_list **a, t_list **b)
// {
// 	int	min_index;
// 	int	position;
// 	int	size;

// 	// Get the minimum index
// 	min_index = get_minindex(a);

// 	// Find the size of the list
// 	size = 0;
// 	t_list *tmp = *a;
// 	while (tmp)
// 	{
// 		size++;
// 		tmp = tmp->next;
// 	}

// 	// Find the position of the minimum index
// 	tmp = *a;
// 	while (tmp)
// 	{
// 		if (tmp->index == min_index)
// 		{
// 			position = tmp->position;
// 			break;
// 		}
// 		tmp = tmp->next;
// 	}

// 	// Rotate to bring the minimum to the top
// 	if (position <= size / 2) // Rotate forward
// 	{
// 		while ((*a)->index != min_index)
// 			ra(a, 1);
// 	}
// 	else // Rotate backward
// 	{
// 		while ((*a)->index != min_index)
// 			rra(a, 1);
// 	}

// 	// Push the minimum to stack b
// 	pb(a, b);

// 	// Sort the remaining 3 elements
// 	sort_three(a);

// 	// Bring the minimum element back
// 	pa(a, b);
// }
