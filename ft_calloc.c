/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 10:32:09 by mmaghri           #+#    #+#             */
/*   Updated: 2023/11/07 10:01:50 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

#include <stdio.h>

void	*ft_calloc(size_t count, size_t sizelen)
{
	size_t	index;
	size_t	total;
	void	*memorystoredbox;

	total = count * sizelen;
	memorystoredbox = malloc(total);
	if (!memorystoredbox)
		return (NULL);
	index = 0;
	while (index < total)
	{
		((unsigned char *)memorystoredbox)[index] = 0;
		index++ ;
	}
	return ((void *)memorystoredbox);
}
// int main()
// { 
// 	int *res ;
// 	size_t count = 3;
// 	size_t sizelen = sizeof(int);
// 	res = calloc(count , sizelen);
// 	char X = 'a';

// 	for (int z = 0 ; z <  count * sizelen ; z++ )
// 	{
// 		printf("%d\n" ,res[z]);
// 	}
// }
// //c | st 
// //4 * 1; 4
// //4 * 4; 16 

// //0000 
// // 			0+++ 0+++ 0+++ 0+++
