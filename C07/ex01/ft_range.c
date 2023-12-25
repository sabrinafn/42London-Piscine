/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrifer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 11:24:49 by sabrifer          #+#    #+#             */
/*   Updated: 2023/06/18 19:04:14 by sabrifer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
/*#include <unistd.h>*/

int	*ft_range(int min, int max)
{
	int	*buffer;
	int	size;
	int	i;
	int	*pointer;

	if (min >= max)
		return (NULL);
	size = max - min;
	buffer = (int *)malloc(size * sizeof(int));
	if (buffer == NULL)
		return (NULL);
	pointer = buffer;
	i = 0;
	while (min < max)
	{
		buffer[i] = min;
		i++;
		min++;
	}
	return (pointer);
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
	int	*array;
	int	i;
	int	*pointer_to_free;

	a = 0;
	b = 10;
	array = ft_range(a, b);
	pointer_to_free = array;
	i = 0;
	while (a < b)
	{
		ft_putnbr(array[i]);
		ft_putchar('\n');
		i++;
		a++;
	}
	free(pointer_to_free);
	return (0);
}*/
