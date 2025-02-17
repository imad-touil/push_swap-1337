/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid_range.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 19:01:25 by imatouil          #+#    #+#             */
/*   Updated: 2025/02/14 20:29:01 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	is_valid_range(char *str)
{
	long	num;

	num = ft_atoi(str);
	if ((num >= INT_MIN && num <= INT_MAX) && ft_strlen(str) <= 11)
		return (1);
	return (0);
}
