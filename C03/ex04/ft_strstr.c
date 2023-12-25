/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrifer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 09:54:05 by sabrifer          #+#    #+#             */
/*   Updated: 2023/06/13 08:58:36 by sabrifer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <string.h>*/
#include <stdlib.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] != '\0' && to_find[j]
			!= '\0' && str[i + j] == to_find[j])
			j++;
		if (to_find[j] == '\0')
			return (str + i);
		i++;
	}
	return (NULL);
}
/*
int	main(int ac, char **av)
{
	if (ac == 3)
	{
		printf("my function: %s\n", ft_strstr(av[1], av[2]));
		printf("system function: %s\n", strstr(av[1], av[2]));
	}
	else
	{
		printf("two arguments\n");
		return (1);
	}
	return (0);
}*/
