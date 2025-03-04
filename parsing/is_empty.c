/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_empty.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 10:42:08 by imatouil          #+#    #+#             */
/*   Updated: 2025/02/05 16:14:36 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	is_empty(char *av)
{
	int	i;

	i = 0;
	while (av[i])
	{
		if (av[i] > 32)
			return (0);
		i++;
	}
	return (1);
}
