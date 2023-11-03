/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 23:01:55 by mmaghri           #+#    #+#             */
/*   Updated: 2023/11/03 10:43:30 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

int	ft_memcmp(const void *src, const void *dest, size_t len)
{
	unsigned char	*cast_s;
	unsigned char	*cast_d;
	size_t			index ;

	cast_s = (unsigned char *)src ;
	cast_d = (unsigned char *)dest ;
	index = 0 ;
	while (cast_s[index] && cast_d[index] 
		&& cast_s[index] == cast_d[index] && index < len)
	{
		index++;
	}
	if (index == len)
	{
		return (0);
	}
	return (cast_s[index] - cast_d[index]);
}
/*
int main()
{
	unsigned char dt[] = "aha" ;
	unsigned char st[] = "ahz" ;
	int res ;
	res = ft_memcmp(st , dt , 3 );
	printf("res is %d" , res );
 }
*/
