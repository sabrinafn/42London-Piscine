/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrifer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 17:25:02 by sabrifer          #+#    #+#             */
/*   Updated: 2023/06/28 14:42:22 by sabrifer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*#include <stdio.h>*/

int	check_base(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		j = i + 1;
		if (str[i] == '-' || str[i] == '+')
			return (1);
		while (str[j])
		{
			if (str[i] == str[j])
				return (1);
			j++;
		}
		i++;
	}
	if (i <= 1)
		return (1);
	return (0);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int long	num;
	int			len;

	len = ft_strlen(base);
	num = nbr;
	if (check_base(base) == 1)
		return ;
	if (num < 0)
	{
		num = -num;
		ft_putchar('-');
	}
	if (num >= len)
	{
		ft_putnbr_base(num / len, base);
		ft_putnbr_base(num % len, base);
	}
	if (num < len)
		ft_putchar(base[num]);
}
/*
int	main(void)
{
	int num = 42;
	
	//-----------------DECIMAL DIGITS---------------------//
	//char decimal[] = "0123456789";
	//ft_putnbr_base(num, decimal);
	//-----------------BINARY DIGITS---------------------//
	//char binary[] = "01";
	//ft_putnbr_base(num, binary);
	//-----------------HEXADECIMAL DIGITS----------------//
	//char hexadecimal[] = "0123456789ABCDEF";
	//ft_putnbr_base(num, hexadecimal);
	//-----------------OCTAL LETTERS---------------------//
	//char octal_letters[] = "poneyvif";
	//ft_putnbr_base(num, octal_letters);
	//-----------------OCTAL DIGITS----------------------//
	//char octal[] = "01234567";
	//ft_putnbr_base(num, octal
	//-----------------RANDOM----------------------------//
	char random[] = "random";
	ft_putnbr_base(num, random);

	return (0);
}*/
