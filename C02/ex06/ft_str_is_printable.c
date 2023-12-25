/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrifer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 12:27:33 by sabrifer          #+#    #+#             */
/*   Updated: 2023/06/09 12:56:31 by sabrifer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>*/

int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (*str < 32 || *str == 127)
			return (0);
		str++;
	}
	return (1);
}
/*
int	main(void)
{
	char	hum[] = "hell\no\t";
	char	printme[] = "hellohello";
	char	empty[] = "";

	printf("%d\n", ft_str_is_printable(hum));
	printf("%d\n", ft_str_is_printable(printme));
	printf("%d\n", ft_str_is_printable(empty));

	return (0);
}*/
