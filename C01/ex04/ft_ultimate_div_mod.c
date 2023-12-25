/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrifer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 12:53:23 by sabrifer          #+#    #+#             */
/*   Updated: 2023/06/08 12:58:55 by sabrifer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>*/

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a / *b;
	*b = *a % *b;
	*a = temp;
}
/*
int	main(void)
{
	int	x;
	int	y;

	x = 10;
	y = 6;
	printf("x: %d, y: %d\n", x, y);
	ft_ultimate_div_mod(&x, &y);
	printf("x: %d, y: %d\n", x, y);
}*/
