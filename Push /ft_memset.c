/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 20:57:57 by mmaghri           #+#    #+#             */
/*   Updated: 2023/11/10 14:35:32 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *array, int num, size_t lencount)
{
	size_t			index;
	unsigned char	*cast;

	cast = (unsigned char *)array ;
	index = 0 ;
	while (index < lencount) 
	{
		cast[index] = (unsigned char)num ;
		index++;
	}
	return (cast);
}
