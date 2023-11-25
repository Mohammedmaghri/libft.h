/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 10:32:09 by mmaghri           #+#    #+#             */
/*   Updated: 2023/11/09 15:48:13 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t sizelen)
{
	size_t	index;
	size_t	total;
	void	*memorystoredbox;

	total = count * sizelen; 
	memorystoredbox = malloc(total);
	if (!memorystoredbox)
		return (NULL);
	index = 0;
	while (index < total)
	{
		((unsigned char *)memorystoredbox)[index] = 0;
		index++ ;
	}
	return ((void *)memorystoredbox);
}
