/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 22:57:55 by mmaghri           #+#    #+#             */
/*   Updated: 2023/11/02 23:24:57 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <string.h>

char	*ft_strchr(const char *string, int cart)
{
	size_t			index ;
	char			*cast;

	cast = (char *)string ;
	index = 0 ;
	while (cast[index] != '\0')
	{
		if (cast[index] == (char )cart)
		{
			return (cast + index);
		}
		index++ ;
	}
	if (cast[index] == cart)
	{
		return (cast + index);
	}
	return (NULL);
}
/*
int main()
{
    char string[] = "thesvx" ;
    char cart = '\0' ;
    char *res ;
    res = ft_strchr(string , cart);
    printf("%s" , res);
}
*/
