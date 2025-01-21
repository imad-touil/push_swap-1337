/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_node.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 18:58:30 by imatouil          #+#    #+#             */
/*   Updated: 2025/01/21 12:28:12 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*create_node(int content)
{
	t_list	*new;

	new = (t_list*)malloc(sizeof(t_list));
	if (!new)
	{
		free_node(&new);
		return (NULL);
	}
	new -> content = content;
	new -> next = NULL;
	new -> prev = NULL;
	return (new);
}
