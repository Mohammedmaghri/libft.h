/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:47:21 by mmaghri           #+#    #+#             */
/*   Updated: 2023/11/13 11:36:54 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	if (!dest && !src)
	{
		return (NULL);
	}
	if (dest > src)
	{
		while (len != 0)
		{
			len-- ;
			((unsigned char *)dest)[len] = ((unsigned char *)src)[len];
		}
	}
	else if (dest < src)
	{
		ft_memcpy(dest, src, len);
	}
	return (dest);
}
