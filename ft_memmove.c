/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:47:21 by mmaghri           #+#    #+#             */
/*   Updated: 2023/11/01 21:45:27 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

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
/*
int main()
{
	unsigned char src[] = "ABCDEFGH" ;
	unsigned char *dest = src + 2 ;
	char *res ;
	res = ft_memmove(dest, src , 3);
	printf("%s" , res);
}
*/