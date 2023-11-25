/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 11:31:34 by mmaghri           #+#    #+#             */
/*   Updated: 2023/11/01 22:39:08 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t len )
{
	size_t			index;

	index = 0 ;
	if (!dest && !src)
	{
		return (0);
	}
	while (len)
	{
		*(char *)dest = *(char *)src;
		index++ ;
		dest++;
		src++ ;
		len-- ;
	}
	return (dest - index);
}
/* 
int main()
{
	unsigned char src[] = "ABCDEF" ;
	unsigned char *dest  = src + 2 ;
	printf("the dest res = %s \n", dest );
	char *res  ;
	res = ft_memcpy(dest , src , 3);
	printf("the res is = %s" , res);
}
*/