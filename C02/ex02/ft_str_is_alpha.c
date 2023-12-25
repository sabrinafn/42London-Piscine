/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrifer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 19:13:27 by sabrifer          #+#    #+#             */
/*   Updated: 2023/06/08 20:07:18 by sabrifer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>*/

int	ft_str_is_alpha(char *str)
{
	while (*str)
	{
		if (*str < 65 || (*str > 90 && *str < 97) || *str > 122)
			return (0);
		str++;
	}
	return (1);
}
/*
int	main(int ac, char **av)
{
	if (ac == 2)
		printf("%d\n", ft_str_is_alpha(av[1]));
	return (0);
}*/
