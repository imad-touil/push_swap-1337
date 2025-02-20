/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 21:19:51 by imatouil          #+#    #+#             */
/*   Updated: 2025/02/20 10:53:13 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

void	sort_three(t_list **a)
{
	t_list	*tmp;

	tmp = get_maxindex(a);
	if (tmp == *a)
		rotate_a(a);
	else if (tmp == (*a)-> next)
		rev_ra(a);
	if ((*a)-> content > (*a)-> next -> content)
		swap_a(a);
}
