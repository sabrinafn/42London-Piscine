/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrifer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 12:41:47 by sabrifer          #+#    #+#             */
/*   Updated: 2023/06/08 12:52:39 by sabrifer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>*/

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int	a;
	int	b;

	a = 10;
	b = 4;
	printf("int a: %d, int b: %d\n", a, b);
	ft_div_mod(a, b, &a, &b);
	printf("int a(div): %d, int b(mod): %d\n", a, b);
	return (0);
}*/
