/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrifer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 20:24:03 by sabrifer          #+#    #+#             */
/*   Updated: 2023/06/29 11:50:58 by sabrifer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstrs(char **str)
{
	int	i;
	int	j;

	i = 1;
	while (str[i])
	{
		j = 0;
		while (str[i][j] != '\0')
		{
			write(1, &str[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_swap(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	main(int ac, char **av)
{
	int	len;
	int	i;
	int	j;

	len = ac;
	i = 1;
	if (ac > 1)
	{
		while (i < len)
		{
			j = i + 1;
			while (j != len)
			{
				if (ft_strcmp(av[i], av[j]) > 0)
					ft_swap(&av[i], &av[j]);
				j++;
			}
			i++;
		}
		ft_putstrs(av);
	}
}
