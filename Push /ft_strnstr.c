/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 15:10:27 by mohammdmagh       #+#    #+#             */
/*   Updated: 2023/11/09 15:17:50 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *string, const char *find, size_t len)
{
	size_t		index;
	size_t		fix;

	index = 0 ;
	if (!string && !len && find)
		return (0);
	if (find[index] == '\0')
		return ((char *)string);
	if (string[index] == 0)
		return (0);
	while (index < len && string[index])
	{
		fix = 0 ;
		while ((string[index + fix] == find[fix]) && ((index + fix) < len))
		{
			if (find[fix + 1] == '\0')
			{
				return ((char *)string + index);
			}
			fix++;
		}
		index++;
	}
	return (NULL);
}
