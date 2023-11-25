/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 09:11:15 by mmaghri           #+#    #+#             */
/*   Updated: 2023/11/09 11:18:01 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *string, int track, size_t len)
{
	size_t	index;

	index = 0;
	while (index < len)
	{
		if (((unsigned char *)string)[index] == (unsigned char)track)
		{
			return ((void *)string + index);
		}
		index++;
	}
	return (NULL);
}
