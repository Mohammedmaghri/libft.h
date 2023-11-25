/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 17:30:03 by mmaghri           #+#    #+#             */
/*   Updated: 2023/11/09 15:17:17 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *stsrc, const char *stdest, size_t len)
{
	size_t			index;

	index = 0 ;
	while ((stsrc[index] && stdest[index])
		&& stsrc[index] == stdest[index] && index < len)
	{
		index++;
	}
	if (index == len)
	{
		return (0);
	}
	return ((unsigned char )stsrc[index] - (unsigned char)stdest[index]);
}
