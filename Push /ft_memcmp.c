/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 23:01:55 by mmaghri           #+#    #+#             */
/*   Updated: 2023/11/09 16:29:27 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *src, const void *dest, size_t len)
{
	size_t			index ;
	unsigned char	*cst_src;
	unsigned char	*cst_dest;

	cst_dest = (unsigned char *)dest ;
	cst_src = (unsigned char *)src;
	index = 0;
	if (!len)
	{
		return (0);
	}
	while (index < len)
	{
		if (cst_src[index] != cst_dest[index])
		{
			return (cst_src[index] - cst_dest[index]);
		}
		index++;
	}
	return (0);
}
