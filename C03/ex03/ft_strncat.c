/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrifer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 09:13:44 by sabrifer          #+#    #+#             */
/*   Updated: 2023/06/12 09:53:43 by sabrifer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <string.h>*/

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	k;
	unsigned int	i;

	i = 0;
	k = 0;
	while (dest[i])
		i++;
	while (src[k] && k < nb)
	{
		dest[i + k] = src[k];
		k++;
	}
	dest[i + k] = '\0';
	return (dest);
}
/*
int	main(int ac, char **av)
{
	unsigned int	x;

	x = 3;
	if (ac == 3)
	{
		printf("my function: %s\n", ft_strncat(av[1], av[2], x));
		printf("system function: %s\n", strncat(av[1], av[2], x));
	}
	else
	{
		printf("two arguments?\n");
		return (1);
	}
	return (0);
}*/
