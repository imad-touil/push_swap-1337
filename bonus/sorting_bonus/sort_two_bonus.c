/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_two_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 18:47:12 by imatouil          #+#    #+#             */
/*   Updated: 2025/02/20 10:53:18 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

void	sort_two(t_list **a)
{
	int		x;
	t_list	*tmp;

	tmp = *a;
	x = tmp-> content;
	tmp = tmp -> next;
	if (x > tmp-> content)
		swap_a(a);
}
