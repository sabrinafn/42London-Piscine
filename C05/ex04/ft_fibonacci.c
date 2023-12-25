/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrifer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 13:05:39 by sabrifer          #+#    #+#             */
/*   Updated: 2023/06/14 20:25:50 by sabrifer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>*/

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0 || index == 1)
		return (index);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
/*
int	main(void)
{
	int	number;

	number = 0;
	while (number <= 15)
	{
		printf("%d", ft_fibonacci(number));
		if (number != 15)
			printf(", ");
		number++;
	}
	printf("\n");
	return (0);
}*/
