/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrifer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 20:42:22 by sabrifer          #+#    #+#             */
/*   Updated: 2023/06/08 20:47:13 by sabrifer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>*/

int	ft_str_is_lowercase(char *str)
{
	while (*str)
	{
		if (*str < 97 || *str > 122)
			return (0);
		str++;
	}
	return (1);
}
/*
int	main(int ac, char **av)
{
	if (ac == 2)
		printf("%d\n", ft_str_is_lowercase(av[1]));
	return (0);
}*/
