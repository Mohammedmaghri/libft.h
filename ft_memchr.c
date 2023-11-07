/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 09:11:15 by mmaghri           #+#    #+#             */
/*   Updated: 2023/11/04 09:09:01 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

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
/*
int	main(void)
{
	int	caract;

	int  string[] = {1,2,3,3,5,1,2} ;
	caract = 2 ;
	int *res ;
	res = ft_memchr(string, caract , 64);
	printf("%d" , res[0] );
	return (0);
}
*/
