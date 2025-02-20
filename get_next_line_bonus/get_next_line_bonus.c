/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 20:17:06 by imatouil          #+#    #+#             */
/*   Updated: 2025/02/20 10:44:28 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

static char	*ft_free_it(char *str)
{
	free(str);
	str = NULL;
	return (NULL);
}

static int	ft_count(char *str)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != '\n')
		i++;
	if (str[i] == '\n')
		i++;
	return (i);
}

static char	*ft_get_line(char *str)
{
	char	*ptr;
	int		i;

	if (!str)
		return (NULL);
	ptr = (char *)malloc(ft_count(str) + 1);
	if (!ptr)
		return (NULL);
	i = 0;
	while (str[i] && str[i] != '\n')
	{
		ptr[i] = str[i];
		i++;
	}
	if (str[i] == '\n')
		ptr[i++] = '\n';
	ptr[i] = '\0';
	return (ptr);
}

static char	*ft_read(int fd, char *str)
{
	char	*buffer;
	char	*tmp;
	int		num;

	if (!str)
		str = ft_strdup("");
	num = 1;
	buffer = (char *)malloc(BUFFER_SIZE + 1);
	if (!buffer)
		return (NULL);
	while (num)
	{
		num = read(fd, buffer, BUFFER_SIZE);
		buffer[num] = '\0';
		tmp = ft_strjoin(str, buffer);
		free(str);
		str = tmp;
		if (!str || ft_strchr(buffer, '\n'))
			break ;
	}
	free(buffer);
	return (str);
}

char	*get_next_line(int fd)
{
	static char	*str;
	char		*line;
	char		*tmp;

	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
	{
		free(str);
		str = NULL;
		return (NULL);
	}
	str = ft_read(fd, str);
	if (str[0] == '\0' || !str)
	{
		free(str);
		str = NULL;
		return (NULL);
	}
	line = ft_get_line(str);
	if (!line)
		return (ft_free_it(str));
	tmp = ft_substr(str, ft_count(str), ft_strlen(str) - ft_count(str));
	free(str);
	str = tmp;
	return (line);
}
