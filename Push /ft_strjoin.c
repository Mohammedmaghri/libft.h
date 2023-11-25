/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 13:05:38 by mmaghri           #+#    #+#             */
/*   Updated: 2023/11/09 22:23:11 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"											

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	index;
	size_t	increment;
	char	*allocation;

	index = 0;
	increment = 0;
	if (!s1 || !s2)
		return (NULL);
	allocation = (char *)malloc(sizeof(char)
			* (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (allocation == NULL)
		return (NULL);
	while (s1[index])
		allocation[increment++] = s1[index++];
	index = 0;
	while (s2[index])
		allocation[increment++] = s2[index++];
	allocation[increment] = '\0';
	return (allocation);
}
