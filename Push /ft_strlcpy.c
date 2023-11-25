/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 23:34:18 by mmaghri           #+#    #+#             */
/*   Updated: 2023/11/13 10:38:19 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
