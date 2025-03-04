/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr_bonus.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 10:09:50 by imatouil          #+#    #+#             */
/*   Updated: 2025/02/20 10:52:16 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

void	rotate_a_b(t_list **a, t_list **b)
{
	if ((a && (*a) && (*a)-> next))
		rotate_a(a);
	if ((b && (*b) && (*b)-> next))
		rotate_b(b);
}
