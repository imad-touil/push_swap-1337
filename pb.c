/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 09:13:08 by imatouil          #+#    #+#             */
/*   Updated: 2025/02/03 16:58:29 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pb(t_list **ahead, t_list **bhead)
{
	t_list	*tmp;

	if (!ahead || !*ahead)
		return ;
	tmp = *ahead;
	*ahead = tmp -> next;
	if (*ahead)
		(*ahead)-> prev = NULL;
	tmp -> next = *bhead;
	if (*bhead)
		(*bhead)-> prev = tmp;
	tmp -> prev = NULL;
	*bhead = tmp;
	write(1, "pb\n", 3);
}
