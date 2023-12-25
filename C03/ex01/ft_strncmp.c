/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrifer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 08:51:59 by sabrifer          #+#    #+#             */
/*   Updated: 2023/06/13 08:57:10 by sabrifer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <string.h>*/

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] && s2[i] && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (i == n)
		return (0);
	return (s1[i] - s2[i]);
}
/*
int	main(int ac, char **av) // char *av[] || char av[][]
{
	unsigned int	x;

	x = 3;
	if (ac == 3)
	{
		printf("my function: %d\n", ft_strncmp(av[1], av[2], x));
		printf("system function: %d\n", strncmp(av[1], av[2], x));
	}
	else
	{
		printf("type two arguments at the command line\n");
		return (1);
	}
	return (0);
}*/
