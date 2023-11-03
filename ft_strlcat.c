/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 11:05:22 by mmaghri           #+#    #+#             */
/*   Updated: 2023/11/02 23:01:47 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <string.h>

size_t	ft_strlcat(char *dest, const char *src, size_t lenght)
{
	size_t	total_dest;
	size_t	total_src;
	char	*cast;
	size_t	index;

	index = 0 ;
	cast = (char *)src ;
	total_dest = ft_strlen(dest);
	total_src = ft_strlen(src);
	if (lenght == 0 || (total_dest > lenght))
	{
		return (lenght + total_src);
	}
	while (cast[index] && index + total_dest < (lenght - 1))
	{
		dest[total_dest + index] = cast[index];
		index++ ;
	}
	dest[total_dest + index] = '\0' ;
	return (total_dest + total_src);
}
/*
int main()
{
    char src[] = "zafa";
    char dest[]= "a" ;
    size_t res ;
    res = strlcat(dest ,src ,3);
    printf("the res %zu\n"  , res );
    printf("the res %s"  ,dest);
    return 0 ;
}




*/
