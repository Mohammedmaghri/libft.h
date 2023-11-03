/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 20:57:57 by mmaghri           #+#    #+#             */
/*   Updated: 2023/11/01 09:51:32 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <string.h>

void	*ft_memset(void *array, int num, size_t lencount)
{
	size_t			index;
	unsigned char	*cast;

	cast = (unsigned char *)array ;
	index = 0 ;
	while (index < lencount) 
	{
		cast[index] = num ;
		index++;
	}
	return (cast);
}

/*
int main()
{
	unsigned char st[10] ;
	unsigned char fd[10] ;
	memset(fd,'Z' , 10);
	ft_memset(st ,'A' , 10 );
	for(int i = 0 ; i < 10 ; i++ )
	{
			printf("%c " , st[i]);
			printf("%c ", fd[i]);
	}
}
*/