/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrifer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 17:44:12 by sabrifer          #+#    #+#             */
/*   Updated: 2023/06/20 10:26:56 by sabrifer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdio.h>
#include <stdlib.h>

struct s_stock_str	*ft_strs_to_tab(int ac, char **av);
void	ft_show_tab(struct s_stock_str *par);

int	main(int ac, char **av)
{
	struct s_stock_str	*structs;

	structs = ft_strs_to_tab(ac, av);
	ft_show_tab(structs);
	int i = 0;
	while (i < ac)
	{
		free(structs[i].copy);
		i++;
	}
	free (structs);
	return (0);
}
