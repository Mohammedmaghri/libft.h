/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammdmaghri <mohammdmaghri@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 23:01:55 by mmaghri           #+#    #+#             */
/*   Updated: 2023/11/03 14:20:47 by mohammdmagh      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

int	ft_memcmp(const void *src, const void *dest, size_t len)
{
	size_t			index ;
	unsigned char	*cst_src;
	unsigned char	*cst_dest;

	cst_dest = (unsigned char *)dest ;
	cst_src = (unsigned char *)src;
	index = 0;
	if (!len)
	{
		return (0);
	}
	while (index < len)
	{
		if (cst_src[index] != cst_dest[index])
		{
			return (cst_src[index] - cst_dest[index]);
		}
		index++;
	}
	return (0);
}
/*
int main()
{
	unsigned char src[] = "aaaz";
	unsigned char dest[] = "baaa";
	int res ;
	res = memcmp(src , dest , 2);
	printf("%d" , res);
	return (0);
}

*/
