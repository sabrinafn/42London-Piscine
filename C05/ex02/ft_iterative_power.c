/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrifer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 09:12:02 by sabrifer          #+#    #+#             */
/*   Updated: 2023/06/22 10:58:36 by sabrifer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	res;

	res = 1;
	if (power < 0)
		return (0);
	while (power > 0)
	{
		res = res * nb;
		power--;
	}
	return (res);
}

int	main(void)
{
	int	number;
	int	power;
	int	i;

	number = 0;
	power = 2;
	while (number < 20)
	{
		i = ft_iterative_power(number, power);
		printf("%d to the power of %d is equal to: %d\n", number, power, i);
		number++;
	}
	return (0);
}
