/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrifer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 09:26:48 by sabrifer          #+#    #+#             */
/*   Updated: 2023/06/18 15:41:34 by sabrifer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>*/

int	ft_recursive_power(int nb, int power)
{
	int	res;

	res = 1;
	if (power < 0)
		return (0);
	if (power > 0)
		res = res * nb * ft_recursive_power(nb, power - 1);
	return (res);
}
/*
int	main(void)
{
	int	number;
	int	power;
	int	i;

	number = 0;
	power = 2;
	while (number < 20)
	{
		i = ft_recursive_power(number, power);
		printf("%d to the power of %d is equal to: %d\n", number, power, i);
		number++;
	}
	return (0);
}*/
