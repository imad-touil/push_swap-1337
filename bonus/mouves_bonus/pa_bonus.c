/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa_bonus.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 12:17:39 by imatouil          #+#    #+#             */
/*   Updated: 2025/02/20 10:51:50 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

void	push_a(t_list **ahead, t_list **bhead)
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
}
