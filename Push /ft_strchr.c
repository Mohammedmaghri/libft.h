/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 22:57:55 by mmaghri           #+#    #+#             */
/*   Updated: 2023/11/09 16:58:16 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *string, int cart)
{
	size_t	index ;

	index = 0 ;
	while (*string)
	{
		if (((unsigned char *)string)[index] == ((unsigned char )cart))
		{
			return ((char *)string + index);
		}
		string++ ;
	}
	if ((((unsigned char *)string)[index]) == (unsigned char)cart)
	{
		return ((char *)string + index);
	}
	if (!cart)
	{
		return (NULL);
	}
	return (NULL);
}
