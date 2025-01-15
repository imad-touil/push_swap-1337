/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 22:58:32 by imatouil          #+#    #+#             */
/*   Updated: 2025/01/15 16:47:03 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
	struct s_list	*prev;
}					t_list;

t_list	*create_node(void *content);
void	addfront(t_list **head, void *contnt);
void	ft_putnbr(int n);
void	ft_putchar(char c);
int		ft_atoi(const char *str);
void	printList(t_list *node);
void	ft_putstr(char *str);

#endif
