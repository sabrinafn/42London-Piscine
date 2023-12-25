/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrifer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 12:35:42 by sabrifer          #+#    #+#             */
/*   Updated: 2023/06/17 09:53:26 by sabrifer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>*/

int	is_white_space(char c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (0);
	return (1);
}

int	is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (0);
	return (1);
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	nbr;

	i = 0;
	sign = 1;
	nbr = 0;
	while (is_white_space(str[i]) == 0)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}
	while (is_digit(str[i]) == 0)
	{
		nbr = nbr * 10 + (str[i] - '0');
		i++;
	}
	return (nbr * sign);
}
/*
int	main(int ac, char **av)
{
	if (ac == 2)
	{
		printf("%d\n", ft_atoi(av[1]));
	}
	return (0);
}*/
