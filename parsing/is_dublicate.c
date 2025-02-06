/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_dublicate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 19:07:25 by imatouil          #+#    #+#             */
/*   Updated: 2025/02/05 16:14:31 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	is_dublicate(int num, t_list *head)
{
	t_list	*tmp;

	tmp = head;
	while (tmp)
	{
		if (num == tmp -> content)
			return (1);
		tmp = tmp -> next;
	}
	return (0);
}
