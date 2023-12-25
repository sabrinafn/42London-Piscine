/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrifer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 20:08:49 by sabrifer          #+#    #+#             */
/*   Updated: 2023/06/08 20:40:39 by sabrifer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>*/

int	ft_str_is_numeric(char *str)
{
	while (*str)
	{
		if (*str < 48 || *str > 57)
			return (0);
		str++;
	}
	return (1);
}
/*
int	main(int ac, char **av)
{
	if (ac == 2)
		printf("%d\n", ft_str_is_numeric(av[1]));
	return (0);
}*/
