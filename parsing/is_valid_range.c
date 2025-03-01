/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid_range.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 19:01:25 by imatouil          #+#    #+#             */
/*   Updated: 2025/02/22 18:46:45 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

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

int	is_valid_range(char *str)
{
	long	num;

	num = ft_atoi(str);
	if ((num >= INT_MIN && num <= INT_MAX) && check_len(str) < 11)
		return (1);
	return (0);
}
