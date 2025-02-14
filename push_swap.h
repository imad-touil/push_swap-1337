/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 22:58:32 by imatouil          #+#    #+#             */
/*   Updated: 2025/02/14 10:54:48 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

typedef struct s_list
{
	int				content;
	int				index;
	int				position;
	struct s_list	*next;
	struct s_list	*prev;
}					t_list;

t_list	*create_node(int content);
void	addback(t_list **head, int content);
void	ft_putnbr(int n);
void	ft_putchar(char c);
long	ft_atoi(char *str);
t_list	*get_maxindex(t_list **a);
int		ft_strlcpy(char *dest, char *src, int size);
char	**ft_split(char *str);
int		ft_strlen(char *str);
int		ft_isdigit(int c);
int		is_valid_number(char *str);
void	fill_stack(char **av, t_list **head);
int		is_valid_range(char *str);
int		is_dublicate(int num, t_list *head);
void	print_error(void);
int		is_empty(char *av);
void	free_node(t_list **head);
char	**ft_free(char **str);
void	sa(t_list **head, int key);
void	sb(t_list **head, int key);
void	ss(t_list **a, t_list **b);
void	pb(t_list **ahead, t_list **bhead);
void	pa(t_list **ahead, t_list **bhead);
void	ra(t_list **head, int key);
void	rb(t_list **head, int key);
void	rr(t_list **a, t_list **b);
void	rra(t_list **head, int key);
void	rrb(t_list **head, int key);
void	rrr(t_list **a, t_list **b);
int		list_size(t_list **head);
void	sort_two(t_list **a);
void	sort_three(t_list **a);
void	set_index(t_list **head, int size);
void	sort_four(t_list **a, t_list **b);
void	sort_five(t_list **a, t_list **b);
t_list	*get_min(t_list **a);
int		is_sorted(t_list **a);
void	sort_large(t_list **a, t_list **b);
void	set_position(t_list **a);
void	lstclear(t_list *lst);

#endif