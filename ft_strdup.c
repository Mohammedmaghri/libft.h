/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 11:20:14 by mmaghri           #+#    #+#             */
/*   Updated: 2023/11/07 10:18:32 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *copystring)
{
	char	*xew;
	size_t	index;
	size_t	total;

	index = 0 ;
	total = ft_strlen(copystring);
	xew = malloc(total + 1);
	if (!xew)
	{
		return (0);
	}
	while (copystring[index])
	{
		xew[index] = copystring[index];
		index++ ;
	}
	xew[index] = '\0';
	return (xew);
}

// int main()
// {
// 	char string[] = "the" ;
// 	char *copy ;
// 	copy = ft_strdup(string);
// 	printf("%s" , copy);
// }