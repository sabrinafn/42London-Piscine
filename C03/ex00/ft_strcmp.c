/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrifer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 08:43:37 by sabrifer          #+#    #+#             */
/*   Updated: 2023/06/13 16:49:23 by sabrifer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <string.h>*/

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
/*
int	main(int ac, char **av)
{
	if (ac == 3)
	{
		printf("my function: %d\n", ft_strcmp(av[1], av[2]));
		printf("system function: %d\n", strcmp(av[1], av[2]));
	}
	else
	{
		printf("type two strings at the command line\n");
		return (1);
	}
	return (0);
}*/
