/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrifer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 20:47:50 by sabrifer          #+#    #+#             */
/*   Updated: 2023/06/08 20:51:17 by sabrifer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>*/

int	ft_str_is_uppercase(char *str)
{
	while (*str)
	{
		if (*str < 65 || *str > 90)
			return (0);
		str++;
	}
	return (1);
}
/*
int	main(int ac, char **av)
{
	if (ac == 2)
		printf("%d\n", ft_str_is_uppercase(av[1]));
	return (0);
}*/
