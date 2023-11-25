/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 11:31:34 by mmaghri           #+#    #+#             */
/*   Updated: 2023/11/13 11:22:59 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t len )
{
	size_t			index;

	index = 0 ;
	if (dest == src)
		return ((unsigned char *)src);
	if (!dest && !src)
	{
		return (0);
	}
	while (len)
	{
		*(unsigned char *)dest = *(unsigned char *)src;
		index++ ;
		dest++;
		src++ ;
		len-- ;
	}
	return (dest - index);
}
