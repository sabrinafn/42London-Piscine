/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrifer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 12:23:07 by sabrifer          #+#    #+#             */
/*   Updated: 2023/06/12 12:32:47 by sabrifer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long int	num;

	num = nb;
	if (num < 0)
	{
		num = -num;
		ft_putchar('-');
	}
	if (num > 9)
	{
		ft_putnbr(num / 10);
		ft_putnbr(num % 10);
	}
	else
		ft_putchar(num + '0');
}
/*
int	main(void)
{
	int	a;
	int	b;
	int	c;

	a = -42;
	b = 1234567;
	c = 24331;
	ft_putnbr(a);
	ft_putchar('\n');
	ft_putnbr(b);
	ft_putchar('\n');
	ft_putnbr(c);
	ft_putchar('\n');
	return (0);
}*/
