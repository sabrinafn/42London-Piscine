/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrifer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 13:07:30 by sabrifer          #+#    #+#             */
/*   Updated: 2023/06/08 13:57:52 by sabrifer         ###   ########.fr       */
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

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	end;

	i = 0;
	end = size - 1;
	while (i < (size / 2))
	{
		ft_swap(&tab[i], &tab[end]);
		i++;
		end--;
	}
}
/*
int	main(void)
{
	int numbers[8] = {0, 1, 2, 3, 4, 5, 9, 7};
	int	i = 0;

	while (i < 8) //loop to print an array of ints
	{
		printf("%d", numbers[i]);
		i++;
	}
	ft_rev_int_tab(numbers, 8);
	i = 0;
	printf("\n");
	while (i < 8) //same loop but after the function
	{
		printf("%d", numbers[i]);
		i++;
	}
	return (0);
}*/
