/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 15:04:13 by imatouil          #+#    #+#             */
/*   Updated: 2025/02/17 17:53:37 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	checker(t_list **a, t_list **b)
{
	char	*line;

	line = get_next_line(0);
	while (line)
	{
		apply(a, b, line);
		free(line);
		line = get_next_line(0);
	}
	if (!is_sorted(a) && !list_size(b))
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
}


int	main(int ac, char *av[])
{
	t_list	*a;
	t_list	*b;
	int		i;

	if (ac == 1)
		return (0);
	a = NULL;
	b = NULL;
	i = 0;
	while (++i < ac)
	{
		if (is_empty(av[i]))
			print_error();
	}
	fill_stack(av, &a);
	checker(&a, &b); 
	lstclear(a);
	lstclear(b);
	return (0);
}
