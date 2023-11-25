/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 22:57:55 by mmaghri           #+#    #+#             */
/*   Updated: 2023/11/07 10:32:54 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <string.h>

char	*ft_strchr(const char *string, int cart)
{
	size_t	index ;

	index = 0 ;
	while (*string)
	{
		if (((char *)string)[index] == ((char)cart))
		{
			return ((char *)string + index);
		}
		string++ ;
	}
	if ((((char *)string)[index]) == (char)cart)
	{
		return ((char *)string + index);
	}
	if (!cart)
	{
		return (NULL);
	}
	return (NULL);
}
