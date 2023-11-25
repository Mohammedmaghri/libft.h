/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 13:47:16 by mmaghri           #+#    #+#             */
/*   Updated: 2023/11/10 19:19:57 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	countword(const char *string, char sep)
{
	size_t	index;
	size_t	counter;

	counter = 0;
	index = 0;
	while (string[index])
	{
		if (string[index] == sep)
			index++;
		else
		{
			counter++;
			while (string[index] != sep && string[index])
			{
				index++;
			}
		}
	}
	return (counter);
}

static char	**freemory(char **mory, int size)
{
	int	index;

	index = 0 ;
	while (index < size)
	{
		free(mory[index]);
		index++;
	}
	free(mory);
	return (NULL);
}

static int	alloc(char **allocation, char *string, char sep)
{
	size_t	index;
	size_t	start;
	size_t	end;

	index = 0;
	start = 0;
	end = 0;
	while (string[index] && index < countword(string, sep))
	{
		while (string[end] && string[end] == sep)
			end++;
		start = end;
		while (string[end] && string[end] != sep)
			end++;
		allocation[index] = ft_substr(string, start, (end - start));
		if (!allocation[index])
		{
			freemory(allocation, index);
			return (0);
		}
		index++;
	}
	allocation[index] = NULL;
	return (1);
}

char	**ft_split(const char *string, char sep)
{
	char	**allocation;
	int		i;

	if (!string)
		return (NULL);
	allocation = (char **)malloc((countword(string, sep) + 1)
			* sizeof(char *));
	if (!allocation)
		return (NULL);
	i = alloc(allocation, (char *)string, sep);
	if (!i)
		return (NULL);
	return (allocation);
}
