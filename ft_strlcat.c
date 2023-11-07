/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 11:05:22 by mmaghri           #+#    #+#             */
/*   Updated: 2023/11/07 10:17:51 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <string.h>

size_t	ft_strlcat(char *dest, const char *src, size_t sizedes)
{
	size_t	total_dest;
	size_t	total_src;
	char	*cast;
	size_t	index;

	index = 0 ;
	cast = (char *)src ;
	total_dest = ft_strlen(dest);
	total_src = ft_strlen(src);
	if (sizedes == 0 || (total_dest > sizedes))
	{
		return (sizedes + total_src);
	}
	while (cast[index] && index + total_dest < (sizedes - 1))
	{
		dest[total_dest + index] = cast[index];
		index++ ;
	}
	dest[total_dest + index] = '\0' ;
	return (total_dest + total_src);
}

// int main()
// {
//     char src[] = "fdddsds";
//     char dest[3]= "a" ;
//     size_t res ;
//     res = strlcat(dest ,src , 0);
//     printf("the res %zu\n"  , res );
// 	printf("the res %s\n"  , dest);
// 		return 0 ;
// }