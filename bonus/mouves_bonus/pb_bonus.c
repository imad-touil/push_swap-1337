/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb_bonus.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 09:13:08 by imatouil          #+#    #+#             */
/*   Updated: 2025/02/20 10:50:40 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

void	push_b(t_list **ahead, t_list **bhead)
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
}
