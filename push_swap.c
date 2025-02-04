/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 16:45:08 by imatouil          #+#    #+#             */
/*   Updated: 2025/02/04 13:19:28 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// void	printList(t_list *node) {
// 	int	tmp;
//     t_list *last;

//     printf("Traversal in forward direction:\n");
//     while (node != NULL) {
// 		tmp = node -> content;
//         printf("value ==> %d, index ==>> %d\n", tmp, node -> index);
//         last = node;
//         node = node->next;
//     }
//     printf("\n");
// }

void	sort(t_list **a, t_list **b, int size)
{
	if (size == 2)
		sort_two(a);
	else if (size == 3)
		sort_three(a);
	else if (size == 4)
		sort_four(a, b);
	else if (size == 5)
		sort_five(a, b);
	else if (size > 5)
		sort_large(a, b);
}

int	main(int ac, char *av[])
{
	t_list	*a;
	t_list	*b;
	int		i;

	if (ac == 1)
		return (1);
	a = NULL;
	b = NULL;
	i = 0;
	while (++i < ac)
	{
		if (is_empty(av[i]))
			print_error();
	}
	checker(av, &a);
	sort(&a, &b, list_size(&a));
	return (0);
}
