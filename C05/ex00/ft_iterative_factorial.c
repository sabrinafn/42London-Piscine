/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrifer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 13:55:13 by sabrifer          #+#    #+#             */
/*   Updated: 2023/06/26 16:08:40 by sabrifer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		i = i * nb;
		nb--;
	}
	return (i);
}

int	main(void)
{
	int	number;

	number = -1;
	while (number < 100)
	{
		printf("%d\n", ft_iterative_factorial(number));
		number++;
	}
	return (0);
	//factorial of 1 and 0 is 1
}
