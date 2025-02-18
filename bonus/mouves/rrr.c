/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 11:58:16 by imatouil          #+#    #+#             */
/*   Updated: 2025/02/06 14:47:08 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

void	rev_rr(t_list **a, t_list **b)
{
	if (a && *a && (*a)-> next)
		rev_ra(a);
	if (b && *b && (*b)-> next)
		rev_ra(b);
}
