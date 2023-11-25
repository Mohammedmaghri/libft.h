/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 13:05:38 by mmaghri           #+#    #+#             */
/*   Updated: 2023/11/07 10:30:42 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"											
#include <stdlib.h>

char	*ft_strjoin(char const *dest, char const *src)
{
	size_t	index;
	size_t	increment;
	char	*allocation;

	index = 0;
	increment = 0;
	allocation = (char *)malloc(sizeof(char) 
			* ((ft_strlen(dest) + ft_strlen(src)) + 1));
	if (allocation == NULL)
		return (NULL);
	while (dest[index])
	{
		allocation[increment] = dest[index];
		increment++ ;
		index++ ;
	}
	index = 0;
	while (src[index])
	{
		allocation[increment] = src[index];
		increment++ ;
		index++ ;
	}
	allocation[increment] = '\0';
	return (allocation);
}
// int main()
// {
// 		char dest[] = "42" ;
// 		char string[] = "tripouille" ;
// 		char *res ;
// 		res  = ft_strjoin(string,dest);
// 		printf("%s" ,res);

// }