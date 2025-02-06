/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 15:04:39 by imatouil          #+#    #+#             */
/*   Updated: 2025/02/06 16:26:09 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H 
# define CHECKER_H

# include "../get_next_line/get_next_line.h"
# include "../push_swap.h"
// typedef struct s_list
// {
// 	int				content;
// 	int				index;
// 	int				position;
// 	struct s_list	*next;
// 	struct s_list	*prev;
// }					t_list;

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
void	sort_five(t_list **a, t_list **b);
void	sort_four(t_list **a, t_list **b);
void	sort_large(t_list **a, t_list **b);
void	sort_three(t_list **a);
void	sort_two(t_list **a);


// t_list	*get_maxindex(t_list **a);
// int		is_sorted(t_list **a);
// int		get_minindex(t_list **a);
// void	set_position(t_list **a);
// int		list_size(t_list **head);
// int		is_empty(char *av);
// void	print_error(void);
// void	fill_stack(char **av, t_list **head);


#endif