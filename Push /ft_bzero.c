/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 23:09:30 by mmaghri           #+#    #+#             */
/*   Updated: 2023/11/09 15:44:04 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *array, size_t index)
{
	size_t			indexcount;
	unsigned char	*cast;

	indexcount = -1; 
	cast = (unsigned char *)array ;
	while (++indexcount < index)
	{
		cast[indexcount] = 0 ;
	}
}
