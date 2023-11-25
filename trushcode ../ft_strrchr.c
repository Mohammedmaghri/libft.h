/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 13:34:07 by mmaghri           #+#    #+#             */
/*   Updated: 2023/11/02 17:11:32 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <stdlib.h>
#include <stddef.h>

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
/*
int main()
{
	char string[] = "theffeerfec" ;
	char carat = ' ' ;
	char *res ;
	res = strrchr(string , carat) ;
	printf("%s" , res);
}
*/
