/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 18:58:30 by imatouil          #+#    #+#             */
/*   Updated: 2025/01/21 11:20:58 by imatouil         ###   ########.fr       */
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

void	addback(t_list **head, int content)
{
	t_list	*node;
	t_list	*tmp;

	node = create_node(content);
	if (!node)
		return ;
	if (*head == NULL)
	{
		*head = node;
		return ;
	}
	tmp = *head;
	while (tmp -> next)
		tmp = tmp -> next;
	tmp -> next = node;
	node -> prev = tmp;
}

void printList(t_list *node) {
	int	tmp;
    t_list *last;

    printf("Traversal in forward direction:\n");
    while (node != NULL) {
		tmp = node -> content;
        printf("%d ", tmp);
        last = node;
        node = node->next;
    }
    printf("\n");
    printf("Traversal in reverse direction:\n");
    while (last != NULL) {
		tmp = last -> content;
        printf("%d ", tmp);
        last = last->prev;
    }
    printf("\n");
}



int	main(int ac, char *av[])
{
	t_list	*head;

	head = NULL;
	if (ac == 1)
		return (1);
	int	i = 1;
	while (i < ac)
	{
		if (is_empty(av[i]))
			print_error();
		i++;
	}
	checker(av, &head);
	sb(&head);
	printList(head);
	return (0);
}
