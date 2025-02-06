/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   apply.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 18:15:54 by imatouil          #+#    #+#             */
/*   Updated: 2025/02/06 18:04:44 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

int	check_mouve(const char *res)
{
	if (!ft_strncmp(res, "pa\n", 3))
		return (1);
	else if (!ft_strncmp(res, "pb\n", 3))
		return (2);
	else if (!ft_strncmp(res, "ra\n", 3))
		return (3);
	else if (!ft_strncmp(res, "rb\n", 3))
		return (4);
	else if (!ft_strncmp(res, "rr\n", 3))
		return (5);
	else if (!ft_strncmp(res, "rra\n", 4))
		return (6);
	else if (!ft_strncmp(res, "rrb\n", 4))
		return (7);
	else if (!ft_strncmp(res, "rrr\n", 4))
		return (8);
	else if (!ft_strncmp(res, "sa\n", 3))
		return (9);
	else if (!ft_strncmp(res, "sb\n", 3))
		return (10);
	else if (!ft_strncmp(res, "ss\n", 3))
		return (11);
	else 
		print_ko();
	return (0);
}

void	apply(t_list **a, t_list **b, char *mouve)
{
	int	res;

	res = check_mouve(mouve);
	if (res == 1)
		push_a(a, b);
	else if (res == 2)
		push_b(a, b);
	else if (res == 3)
		rotate_a(a);
	else if (res == 4)
		rotate_b(b);
	else if (res == 5)
		rotate_a_b(a, b);
	else if (res == 6)
		rev_ra(a);
	else if (res == 7)
		rev_rb(b);
	else if (res == 8)
		rev_rr(a, b);
	else if (res == 9)
		swap_a(a);
	else if (res == 10)
		swap_b(b);
	else if (res == 11)
		swap_a_b(a, b);
}
