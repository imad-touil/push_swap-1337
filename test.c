/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 15:08:44 by imatouil          #+#    #+#             */
/*   Updated: 2025/01/16 21:09:26 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	range(int num)
{
	if (num >= INT_MIN && num <= INT_MAX)
		return (1);
	return (0);
}

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
	printf("%d\n", is_valid_number("1"));
	printf("%d\n", ft_isdigit('1'));


}

// 2147483647, -2147483648