/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 15:08:44 by imatouil          #+#    #+#             */
/*   Updated: 2025/01/26 20:17:51 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	printList(t_list *node) {
	int	tmp;
    t_list *last;

    printf("Traversal in forward direction:\n");
    while (node != NULL) {
		tmp = node -> content;
        printf("value ==> %d, index ==>> %d\n", tmp, node -> index);
        last = node;
        node = node->next;
    }
    printf("\n");
    // printf("Traversal in reverse direction:\n");
    // while (last != NULL) {
	// 	tmp = last -> content;
    //     printf("%d ", tmp);
    //     last = last->prev;
    // }
    // printf("\n");
}

// int	main(void)
// {
// 	char *t = "-21474836493333";
// 	if (range(ft_atoi(t)) != 1)
// 		printf("Hello");
// 	else
// 		printf("bslama!");
// 	return (0);

// *******************************
	// int i = 0;
	// while (i < 5)
	// {
	// 	int j = 0;
	// 	while (j < 7)
	// 		printf("%d ", j++);
	// 	if (i == 0)
	// 		exit(1);
	// 	i++;
	// }

	// *************************
	// printf("%d\n", is_valid_number("1"));
	// printf("%d\n", ft_isdigit('1'));
	// *************************
	// printf("%d\n", is_valid_range("-2147483649"));
	// printf("%d\n", is_valid_range("-214748369999999949")); // Should print 0
    // printf("%d\n", is_valid_range("2147483647"));         // Should print 1
    // printf("%d\n", is_valid_range("-2147483648"));        // Should print 1
    // printf("%d\n", is_valid_range("-2147483649"));        // Should print 0
    // printf("%d\n", is_valid_range("0"));                 // Should print 1
    // printf("%d\n", is_valid_range("42"));                // Should print 1



	// ******************** Break Test **********

	// int	i = 0;
	// int j;
	// while (i <= 2)
	// {
	// 	j = 0;
	// 	while (j < 10)
	// 	{
	// 		printf("i ==>> %d, j ==> %d\n", i, j);
	// 		if (j == 3)
	// 			break ;
	// 		j++;
	// 	}
	// 	i++;
	// }
// }

// ****************** pa/pb Test ***************************************

// int	main(int ac, char *av[])
// {
// 	t_list	*head;
// 	t_list	*bhead;

// 	head = NULL;
// 	if (ac == 1)
// 		return (1);
// 	int	i = 1;
// 	bhead = NULL;
// 	while (i < ac)
// 	{
// 		if (is_empty(av[i]))
// 			print_error();
// 		i++;
// 	}
// 	checker(av, &head);
// 	printf("\n\n*************** Beffor anny push operation ************\n\n");
// 	printList(head);
// 	printList(bhead);
// 	pb(&head, &bhead);
// 	pb(&head, &bhead);
// 	printf("\n\n*************** After pb operation ********************\n\n");
// 	printList(head);
// 	printList(bhead);
// 	pa(&head, &bhead);
// 	printf("\n\n*************** After pa operation ********************\n\n");
// 	printList(head);
// 	printList(bhead);
// 	while (1); // To Examine Leaks 
// 	return (0);
// }



// ************************* ra/rb Test **************************************

// int	main(int ac, char *av[])
// {
// 	t_list	*head;
// 	t_list	*bhead;

// 	head = NULL;
// 	if (ac == 1)
// 		return (1);
// 	int	i = 1;
// 	bhead = NULL;
// 	while (i < ac)
// 	{
// 		if (is_empty(av[i]))
// 			print_error();
// 		i++;
// 	}
// 	checker(av, &head);
// 	printf("\n\n******************* Before any rotate ************************\n\n");
// 	// for (int i = 0; i < 5; i++)
// 	// 	pb(&head, &bhead);
// 	printList(head);
// 	pb(&head, &bhead);
// 	pb(&head, &bhead);
// 	pb(&head, &bhead);
// 	printList(head);
// 	printList(bhead);
// 	rr(&head, &bhead);
// 	printf("\n\n******************* After rotate a ************************\n\n");
// 	printList(head);
// 	printList(bhead);
// 	rb(&bhead);
// 	printf("\n\n******************* After rotate b ************************\n\n");
// 	printList(head);
// 	printList(bhead);
// 	while (1); // To Examine Leaks 
// }



// ************************* rra/rrb Test **************************************

// int	main(int ac, char *av[])
// {
// 	t_list	*head;
// 	t_list	*bhead;

// 	head = NULL;
// 	if (ac == 1)
// 		return (1);
// 	int	i = 1;
// 	bhead = NULL;
// 	while (i < ac)
// 	{
// 		if (is_empty(av[i]))
// 			print_error();
// 		i++;
// 	}
// 	checker(av, &head);
// 	printf("print stack A at the beginning\n");
// 	printList(head);
// 	printList(bhead);
// 	pb(&head, &bhead);
// 	pb(&head, &bhead);
// 	pb(&head, &bhead);
// 	pb(&head, &bhead);
// 	printf("\n<< pb >> 3 times and print both stak A and stack B\n\n");
// 	printList(head);
// 	printList(bhead);
// 	printf("\n<< rra >> and << rrb >> 1 time and print both stak A and stack B\n\n");
// 	// rra(&head);
// 	// rrb(&bhead);
// 	rrr(&head, &bhead);
// 	printList(head);
// 	printList(bhead);
// 	while (1);
// }

// ********************* Test indexing ***********************
// int	main(int ac, char *av[])
// {
// 	t_list	*a;
// 	t_list	*b;
// 	int		i;

// 	if (ac == 1)
// 		return (1);
// 	a = NULL;
// 	b = NULL;
// 	i = 0;
// 	while (++i < ac)
// 	{
// 		if (is_empty(av[i]))
// 			print_error();
// 	}
// 	checker(av, &a);
// 	printList(a); 
// 	return (0);
// }







void	sort(t_list **a, t_list **b, int size)
{
	if (!b)
		printf("Say Hi\n");
	if (size == 2)
		sort_two(a);
	else if (size == 3)
		sort_three(a);
	else if (size == 4)
		sort_four(a, b);
	// else if (size == 5)
	// 	sort_five(&a, &b);
	// else if (size > 5)
	// 	sort_more(&a, &b);
}

// ***************** Sort Two ****************

// int	main(int ac, char *av[])
// {
// 	t_list	*a;
// 	t_list	*b;
// 	// int		size;
// 	int		i;

// 	if (ac == 1)
// 		return (1);
// 	a = NULL;
// 	b = NULL;
// 	i = 0;
// 	while (++i < ac)
// 	{
// 		if (is_empty(av[i]))
// 			print_error();
// 	}
// 	checker(av, &a);
// 	printList(a); 
// 	return (0);
// }



// ***************** Sort Three ****************

// int	main(int ac, char *av[])
// {
// 	t_list	*a;
// 	t_list	*b;
// 	int		i;

// 	if (ac == 1)
// 		return (1);
// 	a = NULL;
// 	b = NULL;
// 	i = 0;
// 	while (++i < ac)
// 	{
// 		if (is_empty(av[i]))
// 			print_error();
// 	}
// 	checker(av, &a);
// 	printList(a);
// 	sort(&a, &b, list_size(&a));
// 	printList(a);
// 	return (0);
// }






// ***************** Sort Four ****************

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
	printList(a);
	sort(&a, &b, list_size(&a));
	printList(a);
	return (0);
}
