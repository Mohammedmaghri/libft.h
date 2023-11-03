/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlca t.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 09:44:33 by mmaghri           #+#    #+#             */
/*   Updated: 2023/11/02 23:26:20 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t lenght)
{
	size_t	total_src;
	size_t	total_dest;
	size_t	index;

	index = 0;
	total_src = ft_strlen(src);
	total_dest = ft_strlen(dest);
	if (lenght == 0 || total_dest > lenght)
	{
		return (total_src + lenght);
	}
	while (src[index] && (index + total_dest) < (lenght - 1))
	{
		dest[total_dest + index] = src[index];
		index++;
	}
	dest[total_dest + index] = '\0';
	return (total_dest + total_src);
}
/*
int main()
{
    char src[] = "aaa";
    char dest[]= "aaDD" ;
    size_t res ;
    res = ft_strlcat(dest ,src , 4)
    printf("the res %zu\n"  , res );
    printf("the res %s"  ,dest);
    return 0 ;
}
*/
