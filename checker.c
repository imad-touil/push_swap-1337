/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 18:58:36 by imatouil          #+#    #+#             */
/*   Updated: 2025/01/16 22:24:30 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	checker(char **av, t_list **head)
{
	char	**res;
	int		i;
	int		j;
	int		num;

	i = 1;
	while (av[i])
	{
		res = ft_split(av[i]);
		j = 0;
		while (res[j])
		{
			if (!is_valid_number(res[j]) || !is_valid_range(res[j]))
				print_error();
			num = ft_atoi(res[j]);
			if (is_dublicate(num, *head))
				print_error();
			if (is_dublicate(num, *head))
				print_error();
			addback(head, num);
			j++;
		}
		i++;
	}
}


// 2147483647, -2147483648