/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   program.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrifer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 12:43:15 by sabrifer          #+#    #+#             */
/*   Updated: 2023/06/19 12:54:05 by sabrifer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft.h"

int	main(int ac, char **av)
{
	if (ac > 1)
	{
		ft_putstr("ft_putchar: ");
		ft_putchar(av[1][0]);
		ft_putchar('\n');
		ft_putstr("ft_putstr: ");
		ft_putstr(av[1]);
		printf("\nft_strlen: %d\n", ft_strlen(av[1]));
		printf("ft_strcmp: %d\n", ft_strcmp(av[1], av[2]));
	}
	int a = 9;
	int b = 6;
	printf("ft_swap: before:  a = %d and b = %d. ", a, b);
	ft_swap(&a, &b);
	printf("after: a = %d and b = %d. \n", a, b);
}
