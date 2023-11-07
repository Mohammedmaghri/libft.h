/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 23:34:18 by mmaghri           #+#    #+#             */
/*   Updated: 2023/11/07 10:16:54 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t len)
{
	size_t	index ;
	size_t	lensrc ;

	lensrc = ft_strlen(src);
	index = 0 ;
	if (len == 0)
	{
		return (lensrc);
	}
	if (!src && !dest)
	{
		return (0);
	}
	while (src[index] && index < len - 1)
	{
		dest[index] = src[index];
		index++ ;
	}
	dest[index] = '\0' ;
	return (lensrc);
}

// int main()
// {
//     size_t res ;
//     char str[] = "the res" ;
//     char dest[20] = "d" ;
//     res = strlcpy( dest, str , 2);
//     printf("the res is %s \n" , dest );
//     printf("the res is %zu" , res );
