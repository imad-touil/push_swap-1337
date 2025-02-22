/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_stack_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 18:58:36 by imatouil          #+#    #+#             */
/*   Updated: 2025/02/22 15:02:46 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

int	check_len(char *str)
{
	int	i;
	int	len;

	i = 0;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] == '0' && str[i])
		i++;
	len = 0;
	while (str[i++])
		len++;
	return (len);
}

static void	ft_helper(char *str, t_list **head)
{
	char	**res;
	int		num;
	int		j;

	res = ft_split(str);
	j = 0;
	while (res[j])
	{
		if (!is_valid_number(res[j]) || !is_valid_range(res[j]))
		{
			ft_free(res);
			lstclear(*head);
			print_error();
		}
		num = ft_atoi(res[j]);
		if (is_dublicate(num, *head) || check_len(str) > 11)
		{
			ft_free(res);
			lstclear(*head);
			print_error();
		}
		addback(head, num);
		j++;
	}
	ft_free(res);
}

void	fill_stack(char **av, t_list **head)
{
	int	i;
	int	size;

	i = 1;
	while (av[i])
	{
		ft_helper(av[i], head);
		i++;
	}
	size = list_size(head);
	set_index(head, size);
}
