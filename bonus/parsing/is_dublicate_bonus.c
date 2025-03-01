/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_dublicate_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 19:07:25 by imatouil          #+#    #+#             */
/*   Updated: 2025/02/24 18:29:37 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

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
