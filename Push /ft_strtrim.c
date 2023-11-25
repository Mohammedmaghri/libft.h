/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 16:25:16 by mmaghri           #+#    #+#             */
/*   Updated: 2023/11/09 17:31:38 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*thecheck(void)
{
	char	*vlloc ;

	vlloc = malloc(1);
	if (!vlloc)
		return (NULL);
	else 
		vlloc[0] = '\0';
	return (vlloc);
}

char	*ft_strtrim(char const *s1, char const *s2)
{
	size_t	start;
	size_t	end;
	size_t	index ;
	size_t	newlen ;

	index = 0 ;
	start = 0;
	if (!s1 || !s2)
		return (NULL);
	end = ft_strlen(s1) - 1;
	if (ft_strlen(s1) == 0)
		return (thecheck());
	if (ft_strlen(s2) == 0)
		return (ft_strdup((char *)s1));
	while (s1[start] && ft_strchr(s2, s1[start]))
		start++ ;
	while (start < end && ft_strchr(s2, s1[end]))
		end-- ;
	newlen = end - start + 1;
	return (ft_substr(s1, start, newlen));
}
