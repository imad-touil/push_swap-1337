/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_min.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 21:39:34 by imatouil          #+#    #+#             */
/*   Updated: 2025/02/06 21:40:16 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

t_list	*get_min_node(t_list **a)
{
	t_list	*tmp;
	t_list	*res;
	int		min;

	tmp = *a;
	res = tmp;
	min = tmp -> content;
	while (tmp)
	{
		if (tmp -> content < min)
		{
			res = tmp;
			min = tmp -> content;
		}
		tmp = tmp -> next;
	}
	return (res);
}
