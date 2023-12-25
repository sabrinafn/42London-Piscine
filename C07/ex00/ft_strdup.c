/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrifer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 21:11:29 by sabrifer          #+#    #+#             */
/*   Updated: 2023/06/18 18:38:19 by sabrifer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
/*#include <string.h>
#include <stdio.h>*/

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*buffer;
	int		size;
	int		i;

	size = ft_strlen(src);
	buffer = (char *)malloc((size + 1) * sizeof(char));
	if (buffer == NULL)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		buffer[i] = src[i];
		i++;
	}
	buffer[i] = '\0';
	return (buffer);
}
/*
int	main(int ac, char **av)
{
	char	*free_me;

	if (ac == 2)
	{
		free_me = ft_strdup(av[1]);
		printf("%s\n", free_me);
		free(free_me);
	}
	return (0);
}*/
