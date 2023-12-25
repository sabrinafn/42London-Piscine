/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrifer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 17:35:38 by sabrifer          #+#    #+#             */
/*   Updated: 2023/06/18 15:39:45 by sabrifer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>*/

int	ft_recursive_factorial(int nb)
{
	int	i;

	i = 1;
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	i = i * nb * ft_recursive_factorial(nb - 1);
	return (i);
}
/*
int	main(void)
{
	int	number;

	number = 0;
	while (number < 100)
	{
		printf("%d\n", ft_recursive_factorial(number));
		number++;
	}
	return (0);
}*/
