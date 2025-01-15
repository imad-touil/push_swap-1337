/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 18:58:30 by imatouil          #+#    #+#             */
/*   Updated: 2025/01/15 16:57:54 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*create_node(void *content)
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


void	addfront(t_list **head, void *content)
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

void	addback(t_list **head, void *content)
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
		tmp = ft_atoi(node -> content);
        printf("%d ", tmp);
        last = node;
        node = node->next;
    }
    printf("\n");

    printf("Traversal in reverse direction:\n");
    while (last != NULL) {
		tmp = ft_atoi(last -> content);
        printf("%d ", tmp);
        last = last->prev;
    }
    printf("\n");
}

int	main(int ac, char *av[])
{
	t_list	*head;
	int		i;

	head = NULL;
	if (ac == 1)
	{
		printf("Change this case to do nothing!!\n");
		return (1);
	}
	i = 1;
	while (i < ac)
	{
		addback(&head, av[i]);
		i++;
	}
	printList(head);
	return (0);
}
