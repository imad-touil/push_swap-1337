/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   apply_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 18:15:54 by imatouil          #+#    #+#             */
/*   Updated: 2025/02/22 15:07:58 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

void	free_and_exit(t_list **a, t_list **b, char *mouve)
{
	if (!a || !b || !mouve)
		return ;
	lstclear(*a);
	lstclear(*b);
	free(mouve);
	get_next_line(-1);
	print_error();
}

void	apply(t_list **a, t_list **b, char *mouve)
{
	if (!ft_strncmp(mouve, "pa\n", 3))
		push_a(a, b);
	else if (!ft_strncmp(mouve, "pb\n", 3))
		push_b(a, b);
	else if (!ft_strncmp(mouve, "ra\n", 3))
		rotate_a(a);
	else if (!ft_strncmp(mouve, "rb\n", 3))
		rotate_b(b);
	else if (!ft_strncmp(mouve, "rr\n", 3))
		rotate_a_b(a, b);
	else if (!ft_strncmp(mouve, "rra\n", 4))
		rev_ra(a);
	else if (!ft_strncmp(mouve, "rrb\n", 4))
		rev_rb(b);
	else if (!ft_strncmp(mouve, "rrr\n", 4))
		rev_rr(a, b);
	else if (!ft_strncmp(mouve, "sa\n", 3))
		swap_a(a);
	else if (!ft_strncmp(mouve, "sb\n", 3))
		swap_b(b);
	else if (!ft_strncmp(mouve, "ss\n", 3))
		swap_a_b(a, b);
	else
		free_and_exit(a, b, mouve);
}
