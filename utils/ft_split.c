/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 18:28:24 by imatouil          #+#    #+#             */
/*   Updated: 2025/02/24 21:28:46 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	ft_count_word(char *str)
{
	int	i;
	int	key;
	int	counter;

	i = 0;
	counter = 0;
	key = 1;
	while (str[i])
	{
		key = 1;
		while (str[i] && (unsigned char)str[i] <= 32)
			i++;
		while (str[i] && (unsigned char)str[i] > 32)
		{
			if (key)
			{
				counter++;
				key = 0;
			}
			i++;
		}
	}
	return (counter);
}

char	**ft_free(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		free(str[i++]);
	free(str);
	return (NULL);
}

static char	**ft_helper(char **res, char *str)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	j = 0;
	while (str[i])
	{
		len = 0;
		while (str[i] && (unsigned char)str[i] <= 32)
			i++;
		while (str[i + len] && (unsigned char)str[i + len] > 32)
			len++;
		if (len > 0)
		{
			res[j] = malloc(sizeof(char) * (len + 1));
			if (!res[j])
				return (ft_free(res));
			ft_strlcpy(res[j++], &str[i], len + 1);
		}
		i += len;
	}
	res[j] = NULL;
	return (res);
}

char	**ft_split(char *str)
{
	char	**res;
	int		num;

	num = ft_count_word(str);
	res = (char **)malloc(sizeof(char *) * (num + 1));
	if (!res)
		return (NULL);
	return (ft_helper(res, str));
}
