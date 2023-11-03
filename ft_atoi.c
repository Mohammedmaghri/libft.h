/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 18:15:07 by mmaghri           #+#    #+#             */
/*   Updated: 2023/11/01 21:59:30 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_atoi(const char *str)
{
	int	index;
	int	negative;
	int	num;

	index = 0;
	negative = 1;
	num = 0; 
	while (str[index] == 32 || (str[index] >= 9 && str[index] <= 13))
	{
		index++ ;
	}
	if (str[index] && (str[index] == '-' || str[index] == '+'))
	{
		if (str[index] == '-')
		{
			negative *= -1 ;
		}
		index++;
	}
	while (str[index] >= '0' && str[index] <= '9')
	{
		num = num * 10 + str[index] - 48 ;
		index++;
	}
	return (num * negative);
}
/*
int main()
{
	char string[] = "  -187";
	int res ;
	res = ft_atoi(string);
	printf("res %d " , res);
}
*/