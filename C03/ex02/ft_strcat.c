/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrifer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 09:01:35 by sabrifer          #+#    #+#             */
/*   Updated: 2023/06/12 09:13:06 by sabrifer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <string.h>*/

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
/*
int	main(int ac, char **av)
{
	if (ac == 3)
	{
		printf("my function: %s\n", ft_strcat(av[1], av[2]));
		printf("system function: %s\n", strcat(av[1], av[2]));
	}
	else
	{
		printf("two arguments?\n");
		return (1);
	}
	return (0);
}*/
