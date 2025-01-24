/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_two.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 18:47:12 by imatouil          #+#    #+#             */
/*   Updated: 2025/01/24 21:26:14 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_two(t_list **a)
{
	int	x;
	t_list	*tmp;

	tmp = *a;
	x = tmp-> content;
	tmp = tmp -> next;
	if (x > tmp-> content)
		sa(a, 1);
}