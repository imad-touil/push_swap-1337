/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid_range.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 19:01:25 by imatouil          #+#    #+#             */
/*   Updated: 2025/02/05 16:14:47 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	is_valid_range(char *str)
{
	long	num;

	num = ft_atoi(str);
	if (num >= INT_MIN && num <= INT_MAX)
		return (1);
	return (0);
}
