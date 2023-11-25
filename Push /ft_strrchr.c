/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 13:34:07 by mmaghri           #+#    #+#             */
/*   Updated: 2023/11/09 15:17:23 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *string, int num)
{
	int	index ;

	index = ft_strlen(string);
	while (index >= 0)
	{
		if (string[index] == (char)num)
		{
			return ((char *)string + index);
		}
		index--; 
	}
	return (0);
}
