/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 09:11:15 by mmaghri           #+#    #+#             */
/*   Updated: 2023/11/03 10:40:16 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

void	*ft_memchr(const void *string, int track, size_t len )
{
	size_t	index ;

	index = 0 ;
	while (index < len)
	{
		if (((unsigned char *)string)[index] == (unsigned char )track)
		{
			return ((void *)string + index);
		}
		index++ ;
	}
	return (NULL);
}
/*
int main()
{
	int  string[] = {1,2,3,3,5,1,2} ;
	int   caract = 2 ;	
	int *res ;
	res = ft_memchr(string, caract , 64);
	printf("%d" , res[0] );
	return 0 ;
}
*/

