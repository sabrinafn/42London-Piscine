/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrifer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 20:25:38 by sabrifer          #+#    #+#             */
/*   Updated: 2023/06/07 20:29:45 by sabrifer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>*/

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
int	main(void)
{
	int	x;
	int	y;

	x = 9;
	y = 6;
	printf("x: %d and y: %d\n", x, y);
	ft_swap(&x, &y);
	printf("x: %d and y: %d\n", x, y);
	return (0);
}*/
