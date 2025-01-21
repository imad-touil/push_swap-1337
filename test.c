/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 15:08:44 by imatouil          #+#    #+#             */
/*   Updated: 2025/01/20 11:13:28 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


int	main(void)
{
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

	int	i = 0;
	int j;
	while (i <= 2)
	{
		j = 0;
		while (j < 10)
		{
			printf("i ==>> %d, j ==> %d\n", i, j);
			if (j == 3)
				break ;
			j++;
		}
		i++;
	}
	
}

// 2147483647, -2147483648