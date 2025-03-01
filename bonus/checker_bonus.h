/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 15:04:39 by imatouil          #+#    #+#             */
/*   Updated: 2025/02/28 18:01:23 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_BONUS_H 
# define CHECKER_BONUS_H

# include "../get_next_line_bonus/get_next_line_bonus.h"
# include "../push_swap.h"

void	apply(t_list **a, t_list **b, char *mouve);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
void	push_a(t_list **ahead, t_list **bhead);
void	push_b(t_list **ahead, t_list **bhead);
void	rotate_a(t_list **head);
void	rotate_b(t_list **head);
void	rotate_a_b(t_list **a, t_list **b);
void	rev_ra(t_list **head);
void	rev_rb(t_list **head);
void	rev_rr(t_list **a, t_list **b);
void	swap_a(t_list **head);
void	swap_b(t_list **head);
void	swap_a_b(t_list **a, t_list **b);
t_list	*get_min_node(t_list **a);

#endif