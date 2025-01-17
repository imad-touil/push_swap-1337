/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 18:58:30 by imatouil          #+#    #+#             */
/*   Updated: 2025/01/16 21:20:33 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*create_node(int content)
{
	t_list	*new;

	new = (t_list*)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new -> content = content;
	new -> next = NULL;
	new -> prev = NULL;
	return (new);
}


void	addfront(t_list **head, int content)
{
	t_list	*new;

	new = create_node(content);
	if (*head == NULL)
	{
		*head = new;
		return ;
	}
	(*head) -> prev = new;
	new -> next = *head;
	*head = new;
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
	{
		printf("Change this case to do nothing!!\n");
		return (1);
	}
	checker(av, &head);
	printList(head);
	
	// *********************************************
	// int	i;
	// int j;
	// char **test;

	// j = 1;
	// while (j < ac)
	// {
	// 	i = 0;
	// 	test = ft_split(av[j]);
	// 	while (test[i])
	// 	{
	// 		printf("%s\n", test[i]);
	// 		i++;
	// 	}
	// 	j++;
	// }
	// *********************************************
	return (0);
}
