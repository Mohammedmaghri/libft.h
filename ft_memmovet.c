/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmovet.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 12:40:45 by mmaghri           #+#    #+#             */
/*   Updated: 2023/11/02 23:24:29 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stddef.h>
#include <stdio.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	if (!dest && !src)
		return (NULL);
	if (dest > src)
	{
		while (len != 0)
		{
			len--;
			((char *)dest)[len] = ((char *)src)[len];
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
	char src[] = "ZBCDEFGHI" ;
	char *dest= src + 2 ;
	char *res ;
	char sr[] = "ABCDEFGHI" ;
	char *des= sr + 2 ;
	char *re ;
	printf("%s\n" , dest);
	re = memmove (des ,sr , 4);
	res = ft_memmove(dest , src , 3);
	printf("the res is %s\n" , dest );
	printf("the res is %s" , re );
}
*/