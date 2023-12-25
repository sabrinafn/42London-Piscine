/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrifer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 13:58:52 by sabrifer          #+#    #+#             */
/*   Updated: 2023/06/08 16:17:53 by sabrifer         ###   ########.fr       */
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

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j != size)
		{
			if (tab[i] > tab[j])
				ft_swap(&tab[i], &tab[j]);
			j++;
		}
		i++;
	}
}
/*
int	main(void)
{
	int	numbers[10] = {6, 9, 3, 7, 4, 8, 0, 5, 1, 2};
	int	i;
	int	length;

	i = 0;
	length = 10;
	while (i < length)
	{
		printf("%d", numbers[i]);
		i++;
	}
	ft_sort_int_tab(numbers, length);
	printf("\n");
	i = 0;
	while (i < length)
	{
		printf("%d", numbers[i]);
		i++;
	}
	return (0);
}*/
