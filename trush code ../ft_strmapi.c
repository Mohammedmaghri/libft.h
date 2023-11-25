/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 12:52:47 by mmaghri           #+#    #+#             */
/*   Updated: 2023/11/07 10:10:14 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include "libft.h"

// char	Achange(unsigned int index, char alp)
// {
// 	(void)index ;
// 	return (alp + 32);
// }
char	*ft_strmapi(char const *string, char (*f)(unsigned int, char))
{
	char	*allocation ;
	size_t	index;

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
// int main()
// {
// 	char string[] = "aaaaa" ;
// 	int index  = 0 ;
// 	char *res ; 
// 	res = ft_strmapi(string , Achange(index , string));
// 	printf("%s" , res );
// }