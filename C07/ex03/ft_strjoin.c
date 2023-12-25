/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrifer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 11:57:30 by sabrifer          #+#    #+#             */
/*   Updated: 2023/06/18 20:48:44 by sabrifer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
/*#include <stdio.h>*/

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	total_length(int size, char **strs, char *sep)
{
	int	i;
	int	count_chars;
	int	count_sep;

	i = 0;
	count_chars = 0;
	count_sep = ft_strlen(sep) * (size - 1);
	while (i < size)
	{
		count_chars = count_chars + ft_strlen(strs[i]);
		i++;
	}
	return (count_chars + count_sep);
}

void	write_to_buffer(char *str, char *sep, char *buffer, int length)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (buffer[i] != '\0')
		i++;
	while (str[j] != '\0')
	{
		buffer[i + j] = str[j];
		j++;
	}
	if (i + j < length - 1)
	{
		while (*sep != '\0')
		{
			buffer[i + j] = *sep;
			j++;
			sep++;
		}
	}
	if ((i + j) == length)
		buffer[i + j] = '\0';
}

char	*empty_string(void)
{
	char	*buffer;

	buffer = malloc(sizeof(char));
	buffer[0] = 0;
	return (buffer);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*buffer;
	char	*pointer;
	int		total_size;
	int		i;

	if (size == 0)
		return (empty_string());
	total_size = total_length(size, strs, sep) + 1;
	buffer = (char *)malloc(total_size * sizeof(char));
	if (buffer == NULL)
		return (NULL);
	pointer = buffer;
	i = 0;
	while (i < total_size)
	{
		buffer[i] = 0;
		i++;
	}
	i = 0;
	while (i < size)
	{
		write_to_buffer(strs[i], sep, buffer, total_size);
		i++;
	}
	return (pointer);
}
/*
int	main(void)
{
	char	*strings[] = {"a", "cat", "is", "not", "a", "dog"};
	char	*sep = "---";
	char	*new;
	int		strs_count;

	strs_count = sizeof(strings) / sizeof(strings[0]);
	new = ft_strjoin(strs_count, strings, sep);
	printf("taram: %s\n", new);
	free(new);
	return (0);
}*/
