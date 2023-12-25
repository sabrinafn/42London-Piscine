/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrifer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 18:13:47 by sabrifer          #+#    #+#             */
/*   Updated: 2023/06/26 16:32:42 by sabrifer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	if (nb <= 0)
		return (0);
	i = 1;
	while (i <= (nb / i))
	{
		printf("i: %d and nb / i: %d\n", i, (nb / i));
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}

int	main(void)
{
	int	number;

	number = 1024;
	//while (number < 100)
	//{
		printf("the square root of %d is %d\n", number, ft_sqrt(number));
//		number++:
//	}
	return (0);
}
