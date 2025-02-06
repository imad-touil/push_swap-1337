/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 12:17:39 by imatouil          #+#    #+#             */
/*   Updated: 2025/02/05 15:29:24 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pa(t_list **ahead, t_list **bhead)
{
	t_list	*tmp;

	if (!bhead || !*bhead)
		return ;
	tmp = *bhead;
	*bhead = tmp -> next;
	if (*bhead)
		(*bhead)-> prev = NULL;
	tmp -> next = *ahead;
	if (*ahead)
		(*ahead)-> prev = tmp;
	tmp -> prev = NULL;
	*ahead = tmp;
	write(1, "pa\n", 3);
}
