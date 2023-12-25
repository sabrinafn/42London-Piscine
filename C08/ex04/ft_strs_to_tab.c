/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrifer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 17:44:12 by sabrifer          #+#    #+#             */
/*   Updated: 2023/06/20 10:15:33 by sabrifer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*buffer;
	int		size;
	int		i;

	size = ft_strlen(src);
	buffer = (char *)malloc((size + 1) * sizeof(char));
	if (buffer == NULL)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		buffer[i] = src[i];
		i++;
	}
	buffer[i] = '\0';
	return (buffer);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	struct s_stock_str	*array;

	array = (struct s_stock_str *)malloc((ac + 1) * sizeof(struct s_stock_str));
	if (array == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		array[i].size = ft_strlen(av[i]);
		array[i].str = av[i];
		array[i].copy = ft_strdup(av[i]);
		if (array[i].copy == NULL)
		{
			while (i-- >= 0)
				free(array[i].copy);
			free (array);
			return (NULL);
		}
		i++;
	}
	array[i].str = NULL;
	return (array);
}
