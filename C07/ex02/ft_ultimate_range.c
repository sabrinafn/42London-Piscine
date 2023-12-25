/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrifer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 11:24:49 by sabrifer          #+#    #+#             */
/*   Updated: 2023/06/18 19:26:44 by sabrifer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
/*#include <stdio.h>
#include <unistd.h>*/

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	*buffer;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	buffer = (int *)malloc(size * sizeof(int *));
	if (buffer == NULL)
		return (-1);
	*range = buffer;
	i = 0;
	while (min < max)
	{
		buffer[i] = min;
		min++;
		i++;
	}
	return (size);
}
/*
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

int	main(void)
{
	int	a;
	int	b;
	int	*array_range;
	int	lenght;
	int	i;

	a = 10;
	b = 25;
	i = 0;
	lenght = ft_ultimate_range(&array_range, a, b);
	while (i < lenght)
	{
		ft_putnbr(array_range[i]);
		write(1, " ", 1);
		i++;
		if (i == lenght)
			write(1, "\n", 1);
	}
	printf("lenght of array allocated is: %d\n", lenght);
	free(array_range);
	return (0);
}*/
