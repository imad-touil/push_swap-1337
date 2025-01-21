/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 22:58:32 by imatouil          #+#    #+#             */
/*   Updated: 2025/01/21 11:21:27 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

typedef struct s_list
{
	int				content;
	struct s_list	*next;
	struct s_list	*prev;
}					t_list;

t_list	*create_node(int content);
void	addback(t_list **head, int content);
void	ft_putnbr(int n);
void	ft_putchar(char c);
long	ft_atoi(char *str);
void	printList(t_list *node);
int		ft_strlcpy(char *dest, char *src, int size);
char	**ft_split(char *str);
int		ft_strlen(char *str);
int		ft_isdigit(int c);
int		is_valid_number(char *str);
void	checker(char **av, t_list **head);
int		is_valid_range(char *str);
int		is_dublicate(int num, t_list *head);
void	print_error(void);
int		is_empty(char *av);
void	free_node(t_list **head);
char	**ft_free(char **str);
void	sa(t_list **head);
void	sb(t_list **head);

#endif
