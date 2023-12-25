/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrifer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 19:02:03 by sabrifer          #+#    #+#             */
/*   Updated: 2023/06/18 15:37:39 by sabrifer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>*/

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i <= (nb / i))
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	int	i;
	int	j;

	i = 0;
	while (i < 100)
	{
		j = ft_is_prime(i);
		if (j == 1)
			printf("%d is a prime number\n", i);
		else if (j == 0)
			printf("%d is not a prime number\n", i);
		i++;
	}
	return (0);
}*/
