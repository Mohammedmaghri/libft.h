/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 12:52:47 by mmaghri           #+#    #+#             */
/*   Updated: 2023/11/10 11:59:30 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *string, char (*f)(unsigned int, char))
{
	char	*allocation ;
	size_t	index;

	if (!string || !f)
		return (NULL);
	index = 0 ;
	allocation = (char *)malloc(sizeof(char) * ft_strlen(string)+ 1);
	if (!allocation)
		return (NULL);
	while (string[index])
	{
		allocation[index] = f(index, string[index]);
		index++ ;
	}
	allocation[index] = '\0';
	return (allocation);
}
